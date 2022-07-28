inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 10, 3 }));
  set_short( "Corridor - x31y10z3" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y10z3.c",
  "east" : DIR+"/rooms/x32y10z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
