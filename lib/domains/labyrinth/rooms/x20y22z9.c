inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 22, 9 }));
  set_short( "Passage - x20y22z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y22z9.c",
  "east" : DIR+"/rooms/x21y22z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
