inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 0 }));
  set_short( "Passage - x10y0z0" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z0.c",
  "east" : DIR+"/rooms/x11y0z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
