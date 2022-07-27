inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 2 }));
  set_short( "Passage - x25y12z2" );
set_objects( DIR+"/monsters/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y12z2.c",
  "north" : DIR+"/rooms/x25y13z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
