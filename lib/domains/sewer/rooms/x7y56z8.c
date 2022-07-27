inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 56, 8 }));
  set_short( "Passage - x7y56z8" );
set_objects( DIR+"/monsters/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y56z8.c",
  "east" : DIR+"/rooms/x8y56z8.c",
  "north" : DIR+"/rooms/x7y57z8.c",
  "south" : DIR+"/rooms/x7y55z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
