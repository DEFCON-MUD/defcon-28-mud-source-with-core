inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 43, 5 }));
  set_short( "Hallway - x25y43z5" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y44z5.c",
  "south" : DIR+"/rooms/x25y42z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
