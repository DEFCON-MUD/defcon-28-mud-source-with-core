inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 20, 5 }));
  set_short( "Passage - x59y20z5" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y21z5.c",
  "south" : DIR+"/rooms/x59y19z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
