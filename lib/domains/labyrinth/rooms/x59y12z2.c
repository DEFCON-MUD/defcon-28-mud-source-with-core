inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 2 }));
  set_short( "Corridor - x59y12z2" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y12z2.c",
  "north" : DIR+"/rooms/x59y13z2.c",
  "south" : DIR+"/rooms/x59y11z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
