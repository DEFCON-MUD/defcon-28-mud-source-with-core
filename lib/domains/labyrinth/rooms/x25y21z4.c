inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 21, 4 }));
  set_short( "Corridor - x25y21z4" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y22z4.c",
  "south" : DIR+"/rooms/x25y20z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
