inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 38, 9 }));
  set_short( "Corridor - x8y38z9" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y38z9.c",
  "east" : DIR+"/rooms/x9y38z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
