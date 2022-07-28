inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 26, 2 }));
  set_short( "Hallway - x34y26z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y26z2.c",
  "east" : DIR+"/rooms/x35y26z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
