inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 4, 1 }));
  set_short( "Corridor - x54y4z1" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y4z1.c",
  "east" : DIR+"/rooms/x55y4z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
