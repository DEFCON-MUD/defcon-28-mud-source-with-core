inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 6, 6 }));
  set_short( "Passage - x11y6z6" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y6z6.c",
  "south" : DIR+"/rooms/x11y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
