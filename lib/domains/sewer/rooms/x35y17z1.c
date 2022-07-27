inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 17, 1 }));
  set_short( "Passage - x35y17z1" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y18z1.c",
  "south" : DIR+"/rooms/x35y16z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
