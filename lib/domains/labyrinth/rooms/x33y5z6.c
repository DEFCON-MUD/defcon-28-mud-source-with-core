inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 5, 6 }));
  set_short( "Corridor - x33y5z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y6z6.c",
  "south" : DIR+"/rooms/x33y4z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
