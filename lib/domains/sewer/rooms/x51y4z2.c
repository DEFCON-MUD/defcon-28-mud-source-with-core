inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 4, 2 }));
  set_short( "Passage - x51y4z2" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y4z2.c",
  "north" : DIR+"/rooms/x51y5z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
