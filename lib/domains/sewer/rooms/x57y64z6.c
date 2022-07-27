inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 6 }));
  set_short( "Hallway - x57y64z6" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z6.c",
  "east" : DIR+"/rooms/x58y64z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
