inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 53, 1 }));
  set_short( "Corridor - x21y53z1" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y54z1.c",
  "south" : DIR+"/rooms/x21y52z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
