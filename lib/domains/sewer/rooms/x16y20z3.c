inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 20, 3 }));
  set_short( "Passage - x16y20z3" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y20z3.c",
  "east" : DIR+"/rooms/x17y20z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
