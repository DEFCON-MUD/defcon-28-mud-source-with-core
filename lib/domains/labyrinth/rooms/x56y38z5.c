inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 38, 5 }));
  set_short( "Passage - x56y38z5" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y38z5.c",
  "east" : DIR+"/rooms/x57y38z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
