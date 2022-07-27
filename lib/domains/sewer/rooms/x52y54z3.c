inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 54, 3 }));
  set_short( "Passage - x52y54z3" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y54z3.c",
  "east" : DIR+"/rooms/x53y54z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
