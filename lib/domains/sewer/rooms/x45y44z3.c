inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 44, 3 }));
  set_short( "Passage - x45y44z3" );
set_objects( DIR+"/monsters/easlerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y44z3.c",
  "north" : DIR+"/rooms/x45y45z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
