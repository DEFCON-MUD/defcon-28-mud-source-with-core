inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 46, 0 }));
  set_short( "Corridor - x52y46z0" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y46z0.c",
  "east" : DIR+"/rooms/x53y46z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
