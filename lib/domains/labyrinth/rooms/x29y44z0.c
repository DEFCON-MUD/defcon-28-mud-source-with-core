inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 0 }));
  set_short( "Hallway - x29y44z0" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z0.c",
  "north" : DIR+"/rooms/x29y45z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
