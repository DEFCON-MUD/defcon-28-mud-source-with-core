inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 26, 7 }));
  set_short( "Hallway - x51y26z7" );
set_objects( DIR+"/monsters/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y26z7.c",
  "north" : DIR+"/rooms/x51y27z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
