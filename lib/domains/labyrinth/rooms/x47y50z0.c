inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 0 }));
  set_short( "Corridor - x47y50z0" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y51z0.c",
  "south" : DIR+"/rooms/x47y49z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
