inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 38, 0 }));
  set_short( "Passage - x11y38z0" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y38z0.c",
  "east" : DIR+"/rooms/x12y38z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
