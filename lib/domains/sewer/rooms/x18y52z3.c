inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 52, 3 }));
  set_short( "Hallway - x18y52z3" );
set_objects( DIR+"/monsters/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y52z3.c",
  "east" : DIR+"/rooms/x19y52z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
