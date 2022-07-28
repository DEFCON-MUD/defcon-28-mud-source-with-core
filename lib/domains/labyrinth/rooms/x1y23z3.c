inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 3 }));
  set_short( "Corridor - x1y23z3" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z3.c",
  "south" : DIR+"/rooms/x1y22z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
