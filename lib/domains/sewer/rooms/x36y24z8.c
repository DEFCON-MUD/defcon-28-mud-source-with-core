inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 24, 8 }));
  set_short( "Passage - x36y24z8" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y24z8.c",
  "east" : DIR+"/rooms/x37y24z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
