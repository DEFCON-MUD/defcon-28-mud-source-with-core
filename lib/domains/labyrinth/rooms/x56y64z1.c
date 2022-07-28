inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 64, 1 }));
  set_short( "Corridor - x56y64z1" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y64z1.c",
  "east" : DIR+"/rooms/x57y64z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
