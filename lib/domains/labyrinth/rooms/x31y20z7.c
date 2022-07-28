inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 7 }));
  set_short( "Hallway - x31y20z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y20z7.c",
  "north" : DIR+"/rooms/x31y21z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
