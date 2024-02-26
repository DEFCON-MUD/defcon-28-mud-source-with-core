inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 3 }));
  set_short( "Passage - x9y4z3" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z3.c",
  "south" : DIR+"/rooms/x9y3z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
