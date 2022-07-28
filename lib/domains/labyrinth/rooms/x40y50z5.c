inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 50, 5 }));
  set_short( "Corridor - x40y50z5" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y50z5.c",
  "east" : DIR+"/rooms/x41y50z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
