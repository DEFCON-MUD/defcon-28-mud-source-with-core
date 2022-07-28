inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 41, 5 }));
  set_short( "Hallway - x43y41z5" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y42z5.c",
  "south" : DIR+"/rooms/x43y40z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
