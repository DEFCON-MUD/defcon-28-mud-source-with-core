inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 8 }));
  set_short( "Passage - x49y17z8" );
set_objects( DIR+"/monsters/gorilla.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z8.c",
  "south" : DIR+"/rooms/x49y16z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
