inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 4 }));
  set_short( "Corridor - x42y4z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z4.c",
  "east" : DIR+"/rooms/x43y4z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
