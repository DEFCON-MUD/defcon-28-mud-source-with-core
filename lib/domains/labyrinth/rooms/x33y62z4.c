inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 62, 4 }));
  set_short( "Passage - x33y62z4" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y62z4.c",
  "east" : DIR+"/rooms/x34y62z4.c",
  "south" : DIR+"/rooms/x33y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
