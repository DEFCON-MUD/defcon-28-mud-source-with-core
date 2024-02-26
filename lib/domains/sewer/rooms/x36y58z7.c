inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 58, 7 }));
  set_short( "Corridor - x36y58z7" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y58z7.c",
  "east" : DIR+"/rooms/x37y58z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
