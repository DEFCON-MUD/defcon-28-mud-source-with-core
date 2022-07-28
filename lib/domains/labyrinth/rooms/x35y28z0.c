inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 28, 0 }));
  set_short( "Passage - x35y28z0" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y28z0.c",
  "north" : DIR+"/rooms/x35y29z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
