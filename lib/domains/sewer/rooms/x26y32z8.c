inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 32, 8 }));
  set_short( "Hallway - x26y32z8" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y32z8.c",
  "east" : DIR+"/rooms/x27y32z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
