inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 42, 5 }));
  set_short( "Corridor - x22y42z5" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y42z5.c",
  "east" : DIR+"/rooms/x23y42z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
