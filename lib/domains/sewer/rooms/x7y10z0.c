inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 0 }));
  set_short( "Hallway - x7y10z0" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y10z0.c",
  "north" : DIR+"/rooms/x7y11z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
