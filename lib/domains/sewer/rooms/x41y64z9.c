inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 9 }));
  set_short( "Corridor - x41y64z9" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z9.c",
  "east" : DIR+"/rooms/x42y64z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
