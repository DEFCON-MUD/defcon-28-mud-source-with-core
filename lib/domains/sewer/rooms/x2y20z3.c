inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 3 }));
  set_short( "Corridor - x2y20z3" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z3.c",
  "east" : DIR+"/rooms/x3y20z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
