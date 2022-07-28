inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 60, 9 }));
  set_short( "Hallway - x19y60z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y61z9.c",
  "south" : DIR+"/rooms/x19y59z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
