inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 7 }));
  set_short( "Hallway - x31y4z7" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y4z7.c",
  "east" : DIR+"/rooms/x32y4z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
