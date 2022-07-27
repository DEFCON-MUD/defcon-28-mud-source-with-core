inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 2, 8 }));
  set_short( "Passage - x37y2z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y2z8.c",
  "east" : DIR+"/rooms/x38y2z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
