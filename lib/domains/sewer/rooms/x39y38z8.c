inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 8 }));
  set_short( "Passage - x39y38z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y38z8.c",
  "south" : DIR+"/rooms/x39y37z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
