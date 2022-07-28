inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 5 }));
  set_short( "Passage - x57y6z5" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y6z5.c",
  "south" : DIR+"/rooms/x57y5z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
