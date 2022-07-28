inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 2, 8 }));
  set_short( "Passage - x35y2z8" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y2z8.c",
  "east" : DIR+"/rooms/x36y2z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
