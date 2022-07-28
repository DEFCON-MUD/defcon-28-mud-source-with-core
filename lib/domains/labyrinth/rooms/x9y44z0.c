inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 44, 0 }));
  set_short( "Hallway - x9y44z0" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y45z0.c",
  "south" : DIR+"/rooms/x9y43z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
