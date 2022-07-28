inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 8, 1 }));
  set_short( "Corridor - x59y8z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y8z1.c",
  "south" : DIR+"/rooms/x59y7z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
