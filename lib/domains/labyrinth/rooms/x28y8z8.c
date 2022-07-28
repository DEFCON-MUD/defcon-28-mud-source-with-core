inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 8, 8 }));
  set_short( "Corridor - x28y8z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y8z8.c",
  "east" : DIR+"/rooms/x29y8z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
