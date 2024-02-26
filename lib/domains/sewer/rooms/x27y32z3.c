inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 3 }));
  set_short( "Corridor - x27y32z3" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y32z3.c",
  "north" : DIR+"/rooms/x27y33z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
