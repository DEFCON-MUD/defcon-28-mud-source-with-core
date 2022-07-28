inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 38, 2 }));
  set_short( "Hallway - x59y38z2" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y39z2.c",
  "south" : DIR+"/rooms/x59y37z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
