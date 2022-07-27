inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 62, 1 }));
  set_short( "Passage - x16y62z1" );
set_objects( DIR+"/monsters/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y62z1.c",
  "east" : DIR+"/rooms/x17y62z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
