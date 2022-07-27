inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 3 }));
  set_short( "Corridor - x15y20z3" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z3.c",
  "south" : DIR+"/rooms/x15y19z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
