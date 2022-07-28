inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 32, 7 }));
  set_short( "Passage - x36y32z7" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y32z7.c",
  "east" : DIR+"/rooms/x37y32z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
