inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 58, 7 }));
  set_short( "Hallway - x54y58z7" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y58z7.c",
  "east" : DIR+"/rooms/x55y58z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
