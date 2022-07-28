inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 50, 4 }));
  set_short( "Corridor - x3y50z4" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y51z4.c",
  "south" : DIR+"/rooms/x3y49z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
