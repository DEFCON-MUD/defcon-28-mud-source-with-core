inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 48, 3 }));
  set_short( "Hallway - x56y48z3" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y48z3.c",
  "east" : DIR+"/rooms/x57y48z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
