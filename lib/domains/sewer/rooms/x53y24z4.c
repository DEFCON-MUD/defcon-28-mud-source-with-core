inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 4 }));
  set_short( "Corridor - x53y24z4" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y25z4.c",
  "south" : DIR+"/rooms/x53y23z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
