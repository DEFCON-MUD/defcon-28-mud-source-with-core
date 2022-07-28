inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 3 }));
  set_short( "Passage - x49y44z3" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y44z3.c",
  "east" : DIR+"/rooms/x50y44z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
