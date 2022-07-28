inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 8 }));
  set_short( "Passage - x17y28z8" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y28z8.c",
  "north" : DIR+"/rooms/x17y29z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
