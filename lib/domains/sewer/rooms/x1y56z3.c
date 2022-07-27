inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 56, 3 }));
  set_short( "Corridor - x1y56z3" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y56z3.c",
  "north" : DIR+"/rooms/x1y57z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
