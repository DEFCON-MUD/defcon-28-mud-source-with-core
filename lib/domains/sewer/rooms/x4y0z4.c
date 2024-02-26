inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 0, 4 }));
  set_short( "Passage - x4y0z4" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y0z4.c",
  "east" : DIR+"/rooms/x5y0z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
