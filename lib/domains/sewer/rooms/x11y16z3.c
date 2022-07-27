inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 16, 3 }));
  set_short( "Passage - x11y16z3" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y16z3.c",
  "north" : DIR+"/rooms/x11y17z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
