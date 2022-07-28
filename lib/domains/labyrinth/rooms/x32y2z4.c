inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 2, 4 }));
  set_short( "Corridor - x32y2z4" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y2z4.c",
  "east" : DIR+"/rooms/x33y2z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
