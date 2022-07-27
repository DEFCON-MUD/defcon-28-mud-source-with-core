inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 5 }));
  set_short( "Hallway - x9y56z5" );
set_objects( DIR+"/monsters/maintenaedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y56z5.c",
  "north" : DIR+"/rooms/x9y57z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
