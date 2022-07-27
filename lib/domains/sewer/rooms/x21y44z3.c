inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 44, 3 }));
  set_short( "Passage - x21y44z3" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y44z3.c",
  "north" : DIR+"/rooms/x21y45z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
