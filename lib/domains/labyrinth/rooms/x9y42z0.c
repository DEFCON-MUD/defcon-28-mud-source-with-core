inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 42, 0 }));
  set_short( "Passage - x9y42z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y43z0.c",
  "south" : DIR+"/rooms/x9y41z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
