inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 12, 7 }));
  set_short( "Corridor - x40y12z7" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y12z7.c",
  "east" : DIR+"/rooms/x41y12z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
