inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 27, 4 }));
  set_short( "Corridor - x51y27z4" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y28z4.c",
  "south" : DIR+"/rooms/x51y26z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
