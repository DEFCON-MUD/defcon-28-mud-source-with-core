inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 0, 1 }));
  set_short( "Corridor - x17y0z1" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y0z1.c",
  "east" : DIR+"/rooms/x18y0z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
