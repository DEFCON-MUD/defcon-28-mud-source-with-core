inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 42, 4 }));
  set_short( "Passage - x61y42z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y43z4.c",
  "south" : DIR+"/rooms/x61y41z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
