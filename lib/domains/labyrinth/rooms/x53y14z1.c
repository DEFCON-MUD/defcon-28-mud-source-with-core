inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 1 }));
  set_short( "Corridor - x53y14z1" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y14z1.c",
  "south" : DIR+"/rooms/x53y13z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
