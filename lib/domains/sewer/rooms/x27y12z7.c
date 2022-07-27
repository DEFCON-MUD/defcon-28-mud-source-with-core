inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 12, 7 }));
  set_short( "Hallway - x27y12z7" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y12z7.c",
  "north" : DIR+"/rooms/x27y13z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
