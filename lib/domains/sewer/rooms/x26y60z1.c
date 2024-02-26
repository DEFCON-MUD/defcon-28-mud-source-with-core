inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 60, 1 }));
  set_short( "Hallway - x26y60z1" );
set_objects( DIR+"/monsters/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y60z1.c",
  "east" : DIR+"/rooms/x27y60z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
