inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 20, 1 }));
  set_short( "Hallway - x50y20z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y20z1.c",
  "east" : DIR+"/rooms/x51y20z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
