inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 48, 7 }));
  set_short( "Corridor - x1y48z7" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y49z7.c",
  "south" : DIR+"/rooms/x1y47z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
