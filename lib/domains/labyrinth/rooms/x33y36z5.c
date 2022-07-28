inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 36, 5 }));
  set_short( "Passage - x33y36z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y36z5.c",
  "east" : DIR+"/rooms/x34y36z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
