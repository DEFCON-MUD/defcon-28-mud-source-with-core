inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 1 }));
  set_short( "Corridor - x1y60z1" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z1.c",
  "north" : DIR+"/rooms/x1y61z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
