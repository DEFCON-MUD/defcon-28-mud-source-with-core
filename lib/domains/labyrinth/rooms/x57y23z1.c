inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 23, 1 }));
  set_short( "Hallway - x57y23z1" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y24z1.c",
  "south" : DIR+"/rooms/x57y22z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
