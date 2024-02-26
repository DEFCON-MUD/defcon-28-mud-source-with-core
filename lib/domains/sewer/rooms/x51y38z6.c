inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 38, 6 }));
  set_short( "Passage - x51y38z6" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y38z6.c",
  "south" : DIR+"/rooms/x51y37z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
