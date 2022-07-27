inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 0, 7 }));
  set_short( "Hallway - x7y0z7" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y0z7.c",
  "east" : DIR+"/rooms/x8y0z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
