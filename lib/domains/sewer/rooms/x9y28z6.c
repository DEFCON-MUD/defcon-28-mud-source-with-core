inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 28, 6 }));
  set_short( "Hallway - x9y28z6" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y28z6.c",
  "north" : DIR+"/rooms/x9y29z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
