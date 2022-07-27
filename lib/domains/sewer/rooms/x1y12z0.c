inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 12, 0 }));
  set_short( "Passage - x1y12z0" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y12z0.c",
  "north" : DIR+"/rooms/x1y13z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
