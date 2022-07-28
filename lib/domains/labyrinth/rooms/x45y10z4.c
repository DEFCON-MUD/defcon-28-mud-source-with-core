inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 10, 4 }));
  set_short( "Passage - x45y10z4" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y11z4.c",
  "south" : DIR+"/rooms/x45y9z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
