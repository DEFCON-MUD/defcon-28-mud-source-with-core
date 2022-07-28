inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 23, 0 }));
  set_short( "Hallway - x5y23z0" );
set_objects( DIR+"/npc/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y24z0.c",
  "south" : DIR+"/rooms/x5y22z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
