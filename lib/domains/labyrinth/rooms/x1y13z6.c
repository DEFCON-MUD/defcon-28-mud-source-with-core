inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 13, 6 }));
  set_short( "Corridor - x1y13z6" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y14z6.c",
  "south" : DIR+"/rooms/x1y12z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
