inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 21, 7 }));
  set_short( "Corridor - x43y21z7" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y22z7.c",
  "south" : DIR+"/rooms/x43y20z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
