inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 5 }));
  set_short( "Hallway - x33y8z5" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y8z5.c",
  "east" : DIR+"/rooms/x34y8z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
