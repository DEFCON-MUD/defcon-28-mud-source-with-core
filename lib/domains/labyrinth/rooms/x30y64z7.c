inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 7 }));
  set_short( "Hallway - x30y64z7" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z7.c",
  "east" : DIR+"/rooms/x31y64z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
