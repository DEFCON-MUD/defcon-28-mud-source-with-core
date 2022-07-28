inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 20, 6 }));
  set_short( "Corridor - x32y20z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y20z6.c",
  "east" : DIR+"/rooms/x33y20z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
