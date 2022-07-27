inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 0 }));
  set_short( "Passage - x25y58z0" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y58z0.c",
  "south" : DIR+"/rooms/x25y57z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
