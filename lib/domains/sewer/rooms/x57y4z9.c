inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 4, 9 }));
  set_short( "Passage - x57y4z9" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y4z9.c",
  "east" : DIR+"/rooms/x58y4z9.c",
  "south" : DIR+"/rooms/x57y3z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
