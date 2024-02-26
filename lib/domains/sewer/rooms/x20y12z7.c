inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 12, 7 }));
  set_short( "Hallway - x20y12z7" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y12z7.c",
  "east" : DIR+"/rooms/x21y12z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
