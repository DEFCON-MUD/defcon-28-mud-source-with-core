inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 6 }));
  set_short( "Corridor - x45y14z6" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y15z6.c",
  "south" : DIR+"/rooms/x45y13z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
