inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 1 }));
  set_short( "Corridor - x19y28z1" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y28z1.c",
  "east" : DIR+"/rooms/x20y28z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
