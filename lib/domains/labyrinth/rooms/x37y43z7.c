inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 43, 7 }));
  set_short( "Corridor - x37y43z7" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y44z7.c",
  "south" : DIR+"/rooms/x37y42z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
