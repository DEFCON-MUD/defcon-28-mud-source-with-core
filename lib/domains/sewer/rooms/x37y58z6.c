inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 58, 6 }));
  set_short( "Corridor - x37y58z6" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y58z6.c",
  "east" : DIR+"/rooms/x38y58z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the glorzo in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
