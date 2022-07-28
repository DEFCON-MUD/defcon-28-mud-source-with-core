inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 52, 1 }));
  set_short( "Corridor - x40y52z1" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y52z1.c",
  "east" : DIR+"/rooms/x41y52z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
