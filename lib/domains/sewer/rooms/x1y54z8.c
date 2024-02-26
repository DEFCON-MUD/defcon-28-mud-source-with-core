inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 54, 8 }));
  set_short( "Hallway - x1y54z8" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y54z8.c",
  "north" : DIR+"/rooms/x1y55z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
