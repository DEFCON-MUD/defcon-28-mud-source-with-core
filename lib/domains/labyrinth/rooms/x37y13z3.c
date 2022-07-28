inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 13, 3 }));
  set_short( "Corridor - x37y13z3" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y14z3.c",
  "south" : DIR+"/rooms/x37y12z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
