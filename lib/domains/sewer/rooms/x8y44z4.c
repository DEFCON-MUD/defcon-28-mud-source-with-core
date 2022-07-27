inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 44, 4 }));
  set_short( "Passage - x8y44z4" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y44z4.c",
  "east" : DIR+"/rooms/x9y44z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
