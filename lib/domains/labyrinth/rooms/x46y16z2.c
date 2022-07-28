inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 16, 2 }));
  set_short( "Passage - x46y16z2" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y16z2.c",
  "east" : DIR+"/rooms/x47y16z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
