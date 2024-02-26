inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 40, 8 }));
  set_short( "Hallway - x2y40z8" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y40z8.c",
  "east" : DIR+"/rooms/x3y40z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
