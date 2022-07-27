inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 6 }));
  set_short( "Corridor - x45y52z6" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z6.c",
  "south" : DIR+"/rooms/x45y51z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
