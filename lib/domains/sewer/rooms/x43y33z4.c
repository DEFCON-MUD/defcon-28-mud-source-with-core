inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 33, 4 }));
  set_short( "Corridor - x43y33z4" );
set_objects( DIR+"/monsters/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y34z4.c",
  "south" : DIR+"/rooms/x43y32z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
