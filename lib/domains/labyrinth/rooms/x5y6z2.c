inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 6, 2 }));
  set_short( "Hallway - x5y6z2" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y6z2.c",
  "north" : DIR+"/rooms/x5y7z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
