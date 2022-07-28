inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 0 }));
  set_short( "Hallway - x1y16z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y17z0.c",
  "south" : DIR+"/rooms/x1y15z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
