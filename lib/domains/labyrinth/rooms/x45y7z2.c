inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 7, 2 }));
  set_short( "Corridor - x45y7z2" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y8z2.c",
  "south" : DIR+"/rooms/x45y6z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
