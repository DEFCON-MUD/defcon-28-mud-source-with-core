inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 2, 3 }));
  set_short( "Hallway - x6y2z3" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y2z3.c",
  "east" : DIR+"/rooms/x7y2z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
