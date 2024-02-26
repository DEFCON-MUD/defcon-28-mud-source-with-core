inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 62, 0 }));
  set_short( "Corridor - x1y62z0" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y62z0.c",
  "south" : DIR+"/rooms/x1y61z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
