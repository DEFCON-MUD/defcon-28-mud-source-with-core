inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 6, 0 }));
  set_short( "Hallway - x1y6z0" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y6z0.c",
  "south" : DIR+"/rooms/x1y5z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
