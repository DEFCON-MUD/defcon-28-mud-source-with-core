inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 1 }));
  set_short( "Passage - x39y50z1" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y51z1.c",
  "south" : DIR+"/rooms/x39y49z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
