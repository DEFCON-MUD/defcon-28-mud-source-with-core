inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 24, 5 }));
  set_short( "Corridor - x37y24z5" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y24z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
