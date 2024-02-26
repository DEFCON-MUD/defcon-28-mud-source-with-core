inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 38, 6 }));
  set_short( "Corridor - x32y38z6" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y38z6.c",
  "east" : DIR+"/rooms/x33y38z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
