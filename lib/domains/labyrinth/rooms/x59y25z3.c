inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 25, 3 }));
  set_short( "Passage - x59y25z3" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y26z3.c",
  "south" : DIR+"/rooms/x59y24z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
