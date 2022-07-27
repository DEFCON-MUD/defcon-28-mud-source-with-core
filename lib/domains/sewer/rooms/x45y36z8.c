inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 36, 8 }));
  set_short( "Passage - x45y36z8" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y36z8.c",
  "north" : DIR+"/rooms/x45y37z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
