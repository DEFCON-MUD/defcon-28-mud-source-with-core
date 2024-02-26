inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 30, 4 }));
  set_short( "Corridor - x17y30z4" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y30z4.c",
  "north" : DIR+"/rooms/x17y31z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
