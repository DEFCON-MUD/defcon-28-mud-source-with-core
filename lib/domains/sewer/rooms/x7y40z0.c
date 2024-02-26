inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 0 }));
  set_short( "Hallway - x7y40z0" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y41z0.c",
  "south" : DIR+"/rooms/x7y39z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
