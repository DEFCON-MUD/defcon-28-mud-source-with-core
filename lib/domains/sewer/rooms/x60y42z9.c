inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 42, 9 }));
  set_short( "Passage - x60y42z9" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y42z9.c",
  "east" : DIR+"/rooms/x61y42z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
