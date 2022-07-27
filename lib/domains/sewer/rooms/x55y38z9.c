inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 38, 9 }));
  set_short( "Passage - x55y38z9" );
set_objects( DIR+"/monsters/rk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y38z9.c",
  "east" : DIR+"/rooms/x56y38z9.c",
  "north" : DIR+"/rooms/x55y39z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
