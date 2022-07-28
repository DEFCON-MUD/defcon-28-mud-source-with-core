inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 40, 3 }));
  set_short( "Passage - x6y40z3" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y40z3.c",
  "east" : DIR+"/rooms/x7y40z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
