inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 54, 7 }));
  set_short( "Passage - x35y54z7" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y54z7.c",
  "north" : DIR+"/rooms/x35y55z7.c",
  "south" : DIR+"/rooms/x35y53z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
