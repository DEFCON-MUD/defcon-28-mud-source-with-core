inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 28, 5 }));
  set_short( "Corridor - x39y28z5" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y28z5.c",
  "east" : DIR+"/rooms/x40y28z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
