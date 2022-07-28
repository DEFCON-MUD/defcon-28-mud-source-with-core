inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 3 }));
  set_short( "Hallway - x31y27z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z3.c",
  "south" : DIR+"/rooms/x31y26z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
