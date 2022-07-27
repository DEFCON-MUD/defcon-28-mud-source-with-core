inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 60, 5 }));
  set_short( "Passage - x26y60z5" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y60z5.c",
  "east" : DIR+"/rooms/x27y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the glorzo in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
