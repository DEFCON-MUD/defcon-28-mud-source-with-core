inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 51, 4 }));
  set_short( "Passage - x55y51z4" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y52z4.c",
  "south" : DIR+"/rooms/x55y50z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
