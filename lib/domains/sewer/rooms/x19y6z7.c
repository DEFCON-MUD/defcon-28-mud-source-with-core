inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 7 }));
  set_short( "Corridor - x19y6z7" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y6z7.c",
  "east" : DIR+"/rooms/x20y6z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
