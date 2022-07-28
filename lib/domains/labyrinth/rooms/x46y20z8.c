inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 20, 8 }));
  set_short( "Corridor - x46y20z8" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y20z8.c",
  "east" : DIR+"/rooms/x47y20z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
