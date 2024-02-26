inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 7 }));
  set_short( "Hallway - x61y52z7" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y53z7.c",
  "south" : DIR+"/rooms/x61y51z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
