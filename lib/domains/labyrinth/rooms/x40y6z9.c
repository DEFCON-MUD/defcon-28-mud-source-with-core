inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 9 }));
  set_short( "Passage - x40y6z9" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z9.c",
  "east" : DIR+"/rooms/x41y6z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
