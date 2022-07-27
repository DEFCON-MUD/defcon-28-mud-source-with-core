inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 1 }));
  set_short( "Passage - x55y30z1" );
set_objects( DIR+"/monsters/clophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y31z1.c",
  "south" : DIR+"/rooms/x55y29z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
