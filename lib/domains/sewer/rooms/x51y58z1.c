inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 58, 1 }));
  set_short( "Passage - x51y58z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y58z1.c",
  "north" : DIR+"/rooms/x51y59z1.c",
  "south" : DIR+"/rooms/x51y57z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
