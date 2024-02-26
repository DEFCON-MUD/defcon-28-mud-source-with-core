inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 56, 0 }));
  set_short( "Passage - x32y56z0" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y56z0.c",
  "east" : DIR+"/rooms/x33y56z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
