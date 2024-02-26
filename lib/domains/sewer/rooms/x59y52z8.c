inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 8 }));
  set_short( "Corridor - x59y52z8" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y52z8.c",
  "east" : DIR+"/rooms/x60y52z8.c",
  "north" : DIR+"/rooms/x59y53z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
