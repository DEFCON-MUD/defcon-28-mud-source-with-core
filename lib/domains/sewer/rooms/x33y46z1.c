inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 1 }));
  set_short( "Corridor - x33y46z1" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z1.c",
  "north" : DIR+"/rooms/x33y47z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
