inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 26, 6 }));
  set_short( "Hallway - x32y26z6" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y26z6.c",
  "east" : DIR+"/rooms/x33y26z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
