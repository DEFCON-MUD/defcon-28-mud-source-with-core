inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 7 }));
  set_short( "Passage - x47y18z7" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z7.c",
  "east" : DIR+"/rooms/x48y18z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
