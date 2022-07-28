inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 22, 2 }));
  set_short( "Corridor - x56y22z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y22z2.c",
  "east" : DIR+"/rooms/x57y22z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
