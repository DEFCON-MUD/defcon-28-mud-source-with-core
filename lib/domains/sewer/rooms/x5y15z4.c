inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 15, 4 }));
  set_short( "Corridor - x5y15z4" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y16z4.c",
  "south" : DIR+"/rooms/x5y14z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
