inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 60, 7 }));
  set_short( "Hallway - x27y60z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y60z7.c",
  "north" : DIR+"/rooms/x27y61z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
