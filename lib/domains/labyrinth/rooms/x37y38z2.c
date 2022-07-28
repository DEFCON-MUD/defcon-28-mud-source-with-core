inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 2 }));
  set_short( "Corridor - x37y38z2" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y38z2.c",
  "north" : DIR+"/rooms/x37y39z2.c",
  "south" : DIR+"/rooms/x37y37z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
