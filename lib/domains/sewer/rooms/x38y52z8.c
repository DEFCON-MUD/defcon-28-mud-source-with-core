inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 52, 8 }));
  set_short( "Corridor - x38y52z8" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y52z8.c",
  "east" : DIR+"/rooms/x39y52z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
