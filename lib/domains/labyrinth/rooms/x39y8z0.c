inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 0 }));
  set_short( "Corridor - x39y8z0" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y8z0.c",
  "east" : DIR+"/rooms/x40y8z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
