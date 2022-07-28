inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 2 }));
  set_short( "Hallway - x53y8z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z2.c",
  "north" : DIR+"/rooms/x53y9z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
