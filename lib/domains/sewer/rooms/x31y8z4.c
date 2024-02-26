inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 8, 4 }));
  set_short( "Hallway - x31y8z4" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y8z4.c",
  "south" : DIR+"/rooms/x31y7z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
