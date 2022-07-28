inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 2 }));
  set_short( "Corridor - x49y30z2" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y30z2.c",
  "north" : DIR+"/rooms/x49y31z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
