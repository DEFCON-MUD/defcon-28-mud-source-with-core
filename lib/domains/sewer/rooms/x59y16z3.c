inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 3 }));
  set_short( "Corridor - x59y16z3" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z3.c",
  "north" : DIR+"/rooms/x59y17z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
