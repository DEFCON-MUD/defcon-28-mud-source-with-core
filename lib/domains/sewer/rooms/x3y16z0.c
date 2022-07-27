inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 16, 0 }));
  set_short( "Passage - x3y16z0" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y17z0.c",
  "south" : DIR+"/rooms/x3y15z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
