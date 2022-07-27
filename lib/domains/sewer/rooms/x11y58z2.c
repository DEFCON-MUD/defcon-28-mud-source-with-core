inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 58, 2 }));
  set_short( "Passage - x11y58z2" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y58z2.c",
  "north" : DIR+"/rooms/x11y59z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
