inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 2 }));
  set_short( "Corridor - x55y40z2" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z2.c",
  "north" : DIR+"/rooms/x55y41z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
