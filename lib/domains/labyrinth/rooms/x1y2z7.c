inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 7 }));
  set_short( "Hallway - x1y2z7" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z7.c",
  "north" : DIR+"/rooms/x1y3z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
