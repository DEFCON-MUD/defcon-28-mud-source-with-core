inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 54, 0 }));
  set_short( "Hallway - x58y54z0" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y54z0.c",
  "east" : DIR+"/rooms/x59y54z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
