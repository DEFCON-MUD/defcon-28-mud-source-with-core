inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 44, 1 }));
  set_short( "Passage - x5y44z1" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y45z1.c",
  "south" : DIR+"/rooms/x5y43z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
