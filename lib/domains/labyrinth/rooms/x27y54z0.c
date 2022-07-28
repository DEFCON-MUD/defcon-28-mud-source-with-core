inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 0 }));
  set_short( "Corridor - x27y54z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y54z0.c",
  "east" : DIR+"/rooms/x28y54z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
