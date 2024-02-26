inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 6 }));
  set_short( "Passage - x33y12z6" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y12z6.c",
  "north" : DIR+"/rooms/x33y13z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
