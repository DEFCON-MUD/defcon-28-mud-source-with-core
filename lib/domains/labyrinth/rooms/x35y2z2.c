inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 2 }));
  set_short( "Corridor - x35y2z2" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z2.c",
  "east" : DIR+"/rooms/x36y2z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
