inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 0, 8 }));
  set_short( "Hallway - x2y0z8" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y0z8.c",
  "east" : DIR+"/rooms/x3y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
