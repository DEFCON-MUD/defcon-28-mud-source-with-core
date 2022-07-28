inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 62, 7 }));
  set_short( "Passage - x12y62z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y62z7.c",
  "east" : DIR+"/rooms/x13y62z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
