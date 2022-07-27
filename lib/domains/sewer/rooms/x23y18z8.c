inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 18, 8 }));
  set_short( "Passage - x23y18z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y18z8.c",
  "south" : DIR+"/rooms/x23y17z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
