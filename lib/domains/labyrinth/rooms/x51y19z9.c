inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 19, 9 }));
  set_short( "Passage - x51y19z9" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y20z9.c",
  "south" : DIR+"/rooms/x51y18z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
