inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 40, 3 }));
  set_short( "Hallway - x34y40z3" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y40z3.c",
  "east" : DIR+"/rooms/x35y40z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
