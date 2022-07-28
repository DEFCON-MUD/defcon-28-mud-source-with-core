inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 19, 0 }));
  set_short( "Passage - x57y19z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y20z0.c",
  "south" : DIR+"/rooms/x57y18z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
