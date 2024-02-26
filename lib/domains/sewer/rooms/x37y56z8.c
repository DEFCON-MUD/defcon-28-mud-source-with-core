inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 56, 8 }));
  set_short( "Corridor - x37y56z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y56z8.c",
  "east" : DIR+"/rooms/x38y56z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
