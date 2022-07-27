inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 54, 8 }));
  set_short( "Passage - x8y54z8" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y54z8.c",
  "east" : DIR+"/rooms/x9y54z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
