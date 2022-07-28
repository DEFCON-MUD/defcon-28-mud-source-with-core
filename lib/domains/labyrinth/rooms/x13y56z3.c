inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 3 }));
  set_short( "Corridor - x13y56z3" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y57z3.c",
  "south" : DIR+"/rooms/x13y55z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
