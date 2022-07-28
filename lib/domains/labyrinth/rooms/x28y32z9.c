inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 32, 9 }));
  set_short( "Passage - x28y32z9" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y32z9.c",
  "east" : DIR+"/rooms/x29y32z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
