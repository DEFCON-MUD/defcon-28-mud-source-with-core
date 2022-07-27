inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 6 }));
  set_short( "Hallway - x19y48z6" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y49z6.c",
  "south" : DIR+"/rooms/x19y47z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
