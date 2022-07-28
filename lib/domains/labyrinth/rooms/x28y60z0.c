inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 60, 0 }));
  set_short( "Hallway - x28y60z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y60z0.c",
  "east" : DIR+"/rooms/x29y60z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
