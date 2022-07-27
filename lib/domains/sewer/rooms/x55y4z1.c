inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 1 }));
  set_short( "Corridor - x55y4z1" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z1.c",
  "east" : DIR+"/rooms/x56y4z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
