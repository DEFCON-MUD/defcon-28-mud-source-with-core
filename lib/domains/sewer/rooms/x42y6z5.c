inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 6, 5 }));
  set_short( "Passage - x42y6z5" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y6z5.c",
  "east" : DIR+"/rooms/x43y6z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
