inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 34, 0 }));
  set_short( "Corridor - x12y34z0" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y34z0.c",
  "east" : DIR+"/rooms/x13y34z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
