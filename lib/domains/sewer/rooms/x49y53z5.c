inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 53, 5 }));
  set_short( "Corridor - x49y53z5" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y54z5.c",
  "south" : DIR+"/rooms/x49y52z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
