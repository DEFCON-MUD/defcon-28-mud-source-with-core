inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 7 }));
  set_short( "Corridor - x29y0z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z7.c",
  "east" : DIR+"/rooms/x30y0z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
