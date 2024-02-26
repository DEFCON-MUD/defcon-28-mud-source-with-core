inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 42, 8 }));
  set_short( "Hallway - x33y42z8" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y42z8.c",
  "north" : DIR+"/rooms/x33y43z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
