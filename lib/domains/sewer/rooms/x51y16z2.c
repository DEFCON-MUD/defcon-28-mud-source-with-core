inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 16, 2 }));
  set_short( "Passage - x51y16z2" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y16z2.c",
  "north" : DIR+"/rooms/x51y17z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
