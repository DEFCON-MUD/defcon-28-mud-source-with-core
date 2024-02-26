inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 43, 6 }));
  set_short( "Corridor - x23y43z6" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y44z6.c",
  "south" : DIR+"/rooms/x23y42z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
