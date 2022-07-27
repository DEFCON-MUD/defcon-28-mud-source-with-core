inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 19, 2 }));
  set_short( "Passage - x25y19z2" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y20z2.c",
  "south" : DIR+"/rooms/x25y18z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
