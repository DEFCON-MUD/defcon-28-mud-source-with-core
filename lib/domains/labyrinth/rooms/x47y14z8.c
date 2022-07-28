inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 8 }));
  set_short( "Hallway - x47y14z8" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y14z8.c",
  "north" : DIR+"/rooms/x47y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
