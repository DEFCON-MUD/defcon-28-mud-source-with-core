inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 54, 8 }));
  set_short( "Passage - x51y54z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y54z8.c",
  "east" : DIR+"/rooms/x52y54z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
