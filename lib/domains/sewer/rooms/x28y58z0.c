inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 58, 0 }));
  set_short( "Passage - x28y58z0" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y58z0.c",
  "east" : DIR+"/rooms/x29y58z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
