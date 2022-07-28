inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 21, 8 }));
  set_short( "Hallway - x31y21z8" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y22z8.c",
  "south" : DIR+"/rooms/x31y20z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
