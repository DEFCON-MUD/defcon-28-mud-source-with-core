inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 6 }));
  set_short( "Corridor - x55y41z6" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z6.c",
  "south" : DIR+"/rooms/x55y40z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
