inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 1 }));
  set_short( "Hallway - x19y0z1" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z1.c",
  "east" : DIR+"/rooms/x20y0z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
