inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 20, 7 }));
  set_short( "Passage - x1y20z7" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y20z7.c",
  "north" : DIR+"/rooms/x1y21z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
