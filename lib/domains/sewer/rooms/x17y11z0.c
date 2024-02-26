inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 11, 0 }));
  set_short( "Corridor - x17y11z0" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y12z0.c",
  "south" : DIR+"/rooms/x17y10z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
