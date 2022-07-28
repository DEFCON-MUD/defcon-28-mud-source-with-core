inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 43, 7 }));
  set_short( "Passage - x5y43z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y44z7.c",
  "south" : DIR+"/rooms/x5y42z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
