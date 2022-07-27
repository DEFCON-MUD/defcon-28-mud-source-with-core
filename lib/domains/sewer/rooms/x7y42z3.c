inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 42, 3 }));
  set_short( "Hallway - x7y42z3" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y42z3.c",
  "east" : DIR+"/rooms/x8y42z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
