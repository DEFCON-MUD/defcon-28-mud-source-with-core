inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 15, 1 }));
  set_short( "Passage - x51y15z1" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y16z1.c",
  "south" : DIR+"/rooms/x51y14z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
