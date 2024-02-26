inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 29, 5 }));
  set_short( "Corridor - x25y29z5" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y30z5.c",
  "south" : DIR+"/rooms/x25y28z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
