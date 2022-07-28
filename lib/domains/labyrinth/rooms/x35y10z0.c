inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 10, 0 }));
  set_short( "Corridor - x35y10z0" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y10z0.c",
  "east" : DIR+"/rooms/x36y10z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
