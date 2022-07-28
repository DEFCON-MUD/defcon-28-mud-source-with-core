inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 14, 8 }));
  set_short( "Corridor - x28y14z8" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y14z8.c",
  "east" : DIR+"/rooms/x29y14z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
