inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 7 }));
  set_short( "Corridor - x5y14z7" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y14z7.c",
  "north" : DIR+"/rooms/x5y15z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
