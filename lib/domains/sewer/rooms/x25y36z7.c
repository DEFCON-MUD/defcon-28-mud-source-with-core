inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 7 }));
  set_short( "Passage - x25y36z7" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y36z7.c",
  "south" : DIR+"/rooms/x25y35z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
