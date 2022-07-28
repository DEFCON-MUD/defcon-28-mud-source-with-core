inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 1 }));
  set_short( "Hallway - x31y22z1" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y23z1.c",
  "south" : DIR+"/rooms/x31y21z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
