inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 38, 4 }));
  set_short( "Passage - x54y38z4" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y38z4.c",
  "east" : DIR+"/rooms/x55y38z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
