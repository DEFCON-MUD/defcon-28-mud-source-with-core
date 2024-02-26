inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 9, 3 }));
  set_short( "Corridor - x55y9z3" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y10z3.c",
  "south" : DIR+"/rooms/x55y8z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
