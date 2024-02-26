inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 40, 6 }));
  set_short( "Passage - x44y40z6" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y40z6.c",
  "east" : DIR+"/rooms/x45y40z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
