inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 24, 3 }));
  set_short( "Passage - x51y24z3" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y24z3.c",
  "east" : DIR+"/rooms/x52y24z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
