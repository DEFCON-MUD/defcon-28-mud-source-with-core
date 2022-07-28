inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 36, 0 }));
  set_short( "Passage - x58y36z0" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y36z0.c",
  "east" : DIR+"/rooms/x59y36z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
