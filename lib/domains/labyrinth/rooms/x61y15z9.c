inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 15, 9 }));
  set_short( "Passage - x61y15z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y16z9.c",
  "south" : DIR+"/rooms/x61y14z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
