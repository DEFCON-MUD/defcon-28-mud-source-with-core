inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 3 }));
  set_short( "Passage - x41y50z3" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y50z3.c",
  "south" : DIR+"/rooms/x41y49z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
