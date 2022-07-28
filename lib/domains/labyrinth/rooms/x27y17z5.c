inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 17, 5 }));
  set_short( "Passage - x27y17z5" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y18z5.c",
  "south" : DIR+"/rooms/x27y16z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
