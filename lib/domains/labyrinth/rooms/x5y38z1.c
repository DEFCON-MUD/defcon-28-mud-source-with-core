inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 1 }));
  set_short( "Hallway - x5y38z1" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y38z1.c",
  "north" : DIR+"/rooms/x5y39z1.c",
  "south" : DIR+"/rooms/x5y37z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
