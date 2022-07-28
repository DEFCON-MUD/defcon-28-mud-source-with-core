inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 7 }));
  set_short( "Hallway - x33y0z7" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z7.c",
  "east" : DIR+"/rooms/x34y0z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
