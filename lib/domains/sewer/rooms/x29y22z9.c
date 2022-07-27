inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 22, 9 }));
  set_short( "Hallway - x29y22z9" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y23z9.c",
  "south" : DIR+"/rooms/x29y21z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
