inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 5 }));
  set_short( "Corridor - x5y2z5" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y2z5.c",
  "north" : DIR+"/rooms/x5y3z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
