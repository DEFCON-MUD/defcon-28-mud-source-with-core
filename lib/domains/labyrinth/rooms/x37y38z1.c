inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 1 }));
  set_short( "Passage - x37y38z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y38z1.c",
  "east" : DIR+"/rooms/x38y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
