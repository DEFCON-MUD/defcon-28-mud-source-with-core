inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 2 }));
  set_short( "Hallway - x45y22z2" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y22z2.c",
  "south" : DIR+"/rooms/x45y21z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
