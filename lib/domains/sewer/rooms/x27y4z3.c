inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 4, 3 }));
  set_short( "Corridor - x27y4z3" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y4z3.c",
  "north" : DIR+"/rooms/x27y5z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
