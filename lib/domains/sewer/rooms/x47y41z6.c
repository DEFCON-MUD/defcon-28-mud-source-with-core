inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 41, 6 }));
  set_short( "Passage - x47y41z6" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y42z6.c",
  "south" : DIR+"/rooms/x47y40z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
