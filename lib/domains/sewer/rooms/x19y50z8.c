inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 8 }));
  set_short( "Corridor - x19y50z8" );
set_objects( DIR+"/monsters/x.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y50z8.c",
  "north" : DIR+"/rooms/x19y51z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
