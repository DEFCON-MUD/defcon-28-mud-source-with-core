inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 2 }));
  set_short( "Corridor - x51y34z2" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y34z2.c",
  "east" : DIR+"/rooms/x52y34z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
