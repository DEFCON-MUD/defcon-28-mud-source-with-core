inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 58, 8 }));
  set_short( "Passage - x28y58z8" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y58z8.c",
  "east" : DIR+"/rooms/x29y58z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
