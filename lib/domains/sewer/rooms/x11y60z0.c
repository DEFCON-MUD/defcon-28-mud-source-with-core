inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 60, 0 }));
  set_short( "Passage - x11y60z0" );
set_objects( DIR+"/monsters/arnie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y60z0.c",
  "south" : DIR+"/rooms/x11y59z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
