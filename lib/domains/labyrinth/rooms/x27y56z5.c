inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 5 }));
  set_short( "Passage - x27y56z5" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z5.c",
  "north" : DIR+"/rooms/x27y57z5.c",
  "south" : DIR+"/rooms/x27y55z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
