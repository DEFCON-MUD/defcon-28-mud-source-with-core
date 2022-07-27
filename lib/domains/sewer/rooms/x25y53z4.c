inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 53, 4 }));
  set_short( "Corridor - x25y53z4" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y54z4.c",
  "south" : DIR+"/rooms/x25y52z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
