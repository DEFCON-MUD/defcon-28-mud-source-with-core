inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 54, 1 }));
  set_short( "Corridor - x10y54z1" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y54z1.c",
  "east" : DIR+"/rooms/x11y54z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
