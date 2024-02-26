inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 2, 8 }));
  set_short( "Passage - x25y2z8" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y2z8.c",
  "north" : DIR+"/rooms/x25y3z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
