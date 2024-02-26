inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 6 }));
  set_short( "Passage - x61y2z6" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z6.c",
  "north" : DIR+"/rooms/x61y3z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
