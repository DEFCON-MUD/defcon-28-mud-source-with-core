inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 43, 8 }));
  set_short( "Passage - x1y43z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y44z8.c",
  "south" : DIR+"/rooms/x1y42z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
