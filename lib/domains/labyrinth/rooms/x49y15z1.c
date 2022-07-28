inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 15, 1 }));
  set_short( "Hallway - x49y15z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y16z1.c",
  "south" : DIR+"/rooms/x49y14z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
