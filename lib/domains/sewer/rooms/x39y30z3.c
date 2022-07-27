inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 3 }));
  set_short( "Hallway - x39y30z3" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y30z3.c",
  "north" : DIR+"/rooms/x39y31z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
