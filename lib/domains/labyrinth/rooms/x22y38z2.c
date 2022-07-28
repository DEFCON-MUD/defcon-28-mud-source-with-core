inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 38, 2 }));
  set_short( "Hallway - x22y38z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y38z2.c",
  "east" : DIR+"/rooms/x23y38z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
