inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 3 }));
  set_short( "Corridor - x55y31z3" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z3.c",
  "south" : DIR+"/rooms/x55y30z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
