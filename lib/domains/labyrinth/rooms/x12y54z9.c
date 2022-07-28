inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 54, 9 }));
  set_short( "Passage - x12y54z9" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y54z9.c",
  "east" : DIR+"/rooms/x13y54z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
