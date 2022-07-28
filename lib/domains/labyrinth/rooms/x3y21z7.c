inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 21, 7 }));
  set_short( "Passage - x3y21z7" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y22z7.c",
  "south" : DIR+"/rooms/x3y20z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
