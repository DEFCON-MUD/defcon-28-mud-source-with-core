inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 5, 4 }));
  set_short( "Corridor - x13y5z4" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y6z4.c",
  "south" : DIR+"/rooms/x13y4z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
