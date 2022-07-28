inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 52, 8 }));
  set_short( "Passage - x19y52z8" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y52z8.c",
  "south" : DIR+"/rooms/x19y51z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
