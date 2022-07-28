inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 3, 7 }));
  set_short( "Corridor - x13y3z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y4z7.c",
  "south" : DIR+"/rooms/x13y2z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
