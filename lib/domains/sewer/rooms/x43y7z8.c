inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 7, 8 }));
  set_short( "Passage - x43y7z8" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y8z8.c",
  "south" : DIR+"/rooms/x43y6z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
