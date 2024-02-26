inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 7 }));
  set_short( "Corridor - x21y62z7" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z7.c",
  "east" : DIR+"/rooms/x22y62z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
