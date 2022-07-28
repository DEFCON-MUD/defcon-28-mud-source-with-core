inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 39, 1 }));
  set_short( "Passage - x5y39z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y40z1.c",
  "south" : DIR+"/rooms/x5y38z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
