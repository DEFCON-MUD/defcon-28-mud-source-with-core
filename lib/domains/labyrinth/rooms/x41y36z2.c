inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 36, 2 }));
  set_short( "Corridor - x41y36z2" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y36z2.c",
  "south" : DIR+"/rooms/x41y35z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
