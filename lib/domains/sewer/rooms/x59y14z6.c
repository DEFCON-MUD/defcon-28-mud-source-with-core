inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 6 }));
  set_short( "Passage - x59y14z6" );
set_objects( DIR+"/monsters/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y14z6.c",
  "south" : DIR+"/rooms/x59y13z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
