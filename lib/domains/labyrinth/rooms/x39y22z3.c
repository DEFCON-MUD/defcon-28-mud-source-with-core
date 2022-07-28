inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 3 }));
  set_short( "Corridor - x39y22z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y23z3.c",
  "south" : DIR+"/rooms/x39y21z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
