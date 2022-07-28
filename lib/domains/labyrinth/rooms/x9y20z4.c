inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 4 }));
  set_short( "Corridor - x9y20z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y20z4.c",
  "north" : DIR+"/rooms/x9y21z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
