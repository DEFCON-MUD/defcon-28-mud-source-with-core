inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 56, 8 }));
  set_short( "Hallway - x29y56z8" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y56z8.c",
  "north" : DIR+"/rooms/x29y57z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
