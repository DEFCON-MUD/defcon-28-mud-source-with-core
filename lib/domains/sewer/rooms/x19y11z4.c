inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 4 }));
  set_short( "Passage - x19y11z4" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z4.c",
  "south" : DIR+"/rooms/x19y10z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
