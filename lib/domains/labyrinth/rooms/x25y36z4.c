inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 4 }));
  set_short( "Corridor - x25y36z4" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y36z4.c",
  "east" : DIR+"/rooms/x26y36z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
