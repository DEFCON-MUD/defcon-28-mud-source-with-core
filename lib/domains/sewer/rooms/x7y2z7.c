inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 7 }));
  set_short( "Corridor - x7y2z7" );
set_objects( DIR+"/monsters/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y2z7.c",
  "north" : DIR+"/rooms/x7y3z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
