inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 15, 2 }));
  set_short( "Hallway - x27y15z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y16z2.c",
  "south" : DIR+"/rooms/x27y14z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
