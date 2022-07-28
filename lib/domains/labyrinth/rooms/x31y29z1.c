inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 29, 1 }));
  set_short( "Hallway - x31y29z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y30z1.c",
  "south" : DIR+"/rooms/x31y28z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
