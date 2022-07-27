inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 8 }));
  set_short( "Passage - x5y10z8" );
set_objects( DIR+"/monsters/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y10z8.c",
  "north" : DIR+"/rooms/x5y11z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
