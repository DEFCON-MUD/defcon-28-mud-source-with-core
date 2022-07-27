inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 19, 8 }));
  set_short( "Corridor - x21y19z8" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y20z8.c",
  "south" : DIR+"/rooms/x21y18z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
