inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 43, 3 }));
  set_short( "Corridor - x61y43z3" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y44z3.c",
  "south" : DIR+"/rooms/x61y42z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
