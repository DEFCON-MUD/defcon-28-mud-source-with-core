inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 56, 8 }));
  set_short( "Corridor - x60y56z8" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y56z8.c",
  "east" : DIR+"/rooms/x61y56z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
