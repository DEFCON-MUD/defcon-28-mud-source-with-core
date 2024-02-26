inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 4, 6 }));
  set_short( "Corridor - x35y4z6" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y5z6.c",
  "south" : DIR+"/rooms/x35y3z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
