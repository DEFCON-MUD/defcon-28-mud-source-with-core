inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 32, 2 }));
  set_short( "Corridor - x51y32z2" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y32z2.c",
  "east" : DIR+"/rooms/x52y32z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
