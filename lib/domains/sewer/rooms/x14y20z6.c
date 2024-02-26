inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 20, 6 }));
  set_short( "Passage - x14y20z6" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y20z6.c",
  "east" : DIR+"/rooms/x15y20z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
