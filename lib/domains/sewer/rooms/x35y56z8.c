inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 8 }));
  set_short( "Passage - x35y56z8" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z8.c",
  "north" : DIR+"/rooms/x35y57z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
