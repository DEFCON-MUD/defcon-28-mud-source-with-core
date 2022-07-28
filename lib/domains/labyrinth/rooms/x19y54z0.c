inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 0 }));
  set_short( "Corridor - x19y54z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y54z0.c",
  "north" : DIR+"/rooms/x19y55z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
