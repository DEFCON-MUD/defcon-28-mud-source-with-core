inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 8 }));
  set_short( "Corridor - x53y6z8" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z8.c",
  "south" : DIR+"/rooms/x53y5z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
