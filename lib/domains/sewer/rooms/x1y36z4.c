inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 36, 4 }));
  set_short( "Corridor - x1y36z4" );
set_objects( DIR+"/monsters/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y37z4.c",
  "south" : DIR+"/rooms/x1y35z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
