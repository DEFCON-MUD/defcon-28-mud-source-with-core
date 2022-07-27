inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 3 }));
  set_short( "Corridor - x11y31z3" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z3.c",
  "south" : DIR+"/rooms/x11y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
