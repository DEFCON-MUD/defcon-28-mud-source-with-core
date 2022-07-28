inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 0 }));
  set_short( "Corridor - x45y32z0" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y32z0.c",
  "east" : DIR+"/rooms/x46y32z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
