inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 5 }));
  set_short( "Hallway - x25y4z5" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y4z5.c",
  "east" : DIR+"/rooms/x26y4z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
