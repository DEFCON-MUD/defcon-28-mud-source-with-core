inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 60, 9 }));
  set_short( "Corridor - x9y60z9" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y60z9.c",
  "north" : DIR+"/rooms/x9y61z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
