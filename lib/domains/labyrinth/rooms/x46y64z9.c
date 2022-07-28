inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 64, 9 }));
  set_short( "Passage - x46y64z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y64z9.c",
  "east" : DIR+"/rooms/x47y64z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
