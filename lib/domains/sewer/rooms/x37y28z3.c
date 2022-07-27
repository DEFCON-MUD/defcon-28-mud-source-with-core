inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 28, 3 }));
  set_short( "Passage - x37y28z3" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y28z3.c",
  "north" : DIR+"/rooms/x37y29z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
