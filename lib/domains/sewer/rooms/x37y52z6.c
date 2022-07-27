inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 6 }));
  set_short( "Corridor - x37y52z6" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y52z6.c",
  "north" : DIR+"/rooms/x37y53z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
