inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 30, 6 }));
  set_short( "Corridor - x61y30z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y30z6.c",
  "north" : DIR+"/rooms/x61y31z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
