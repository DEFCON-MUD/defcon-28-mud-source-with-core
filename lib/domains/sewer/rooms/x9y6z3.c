inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 6, 3 }));
  set_short( "Hallway - x9y6z3" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y6z3.c",
  "north" : DIR+"/rooms/x9y7z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
