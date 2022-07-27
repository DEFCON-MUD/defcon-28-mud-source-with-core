inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 56, 4 }));
  set_short( "Passage - x5y56z4" );
set_objects( DIR+"/monsters/banker.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y56z4.c",
  "south" : DIR+"/rooms/x5y55z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
