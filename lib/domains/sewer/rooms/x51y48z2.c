inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 2 }));
  set_short( "Hallway - x51y48z2" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y48z2.c",
  "south" : DIR+"/rooms/x51y47z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
