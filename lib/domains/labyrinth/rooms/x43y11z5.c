inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 11, 5 }));
  set_short( "Corridor - x43y11z5" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y12z5.c",
  "south" : DIR+"/rooms/x43y10z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
