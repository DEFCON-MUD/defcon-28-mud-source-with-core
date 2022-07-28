inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 5 }));
  set_short( "Corridor - x43y2z5" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z5.c",
  "north" : DIR+"/rooms/x43y3z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
