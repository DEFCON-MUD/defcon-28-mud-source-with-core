inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 1 }));
  set_short( "Hallway - x3y62z1" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z1.c",
  "east" : DIR+"/rooms/x4y62z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
