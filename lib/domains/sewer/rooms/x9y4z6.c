inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 6 }));
  set_short( "Passage - x9y4z6" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y5z6.c",
  "south" : DIR+"/rooms/x9y3z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
