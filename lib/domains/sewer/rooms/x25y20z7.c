inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 20, 7 }));
  set_short( "Corridor - x25y20z7" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y20z7.c",
  "north" : DIR+"/rooms/x25y21z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
