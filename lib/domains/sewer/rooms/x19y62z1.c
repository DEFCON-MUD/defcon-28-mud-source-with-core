inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 62, 1 }));
  set_short( "Corridor - x19y62z1" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y62z1.c",
  "south" : DIR+"/rooms/x19y61z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
