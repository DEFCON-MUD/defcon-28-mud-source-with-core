inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 44, 4 }));
  set_short( "Passage - x39y44z4" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y45z4.c",
  "south" : DIR+"/rooms/x39y43z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
