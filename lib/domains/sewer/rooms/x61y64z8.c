inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 8 }));
  set_short( "Passage - x61y64z8" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z8.c",
  "east" : DIR+"/rooms/x62y64z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
