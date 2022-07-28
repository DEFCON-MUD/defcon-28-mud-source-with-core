inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 8 }));
  set_short( "Passage - x51y56z8" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y56z8.c",
  "north" : DIR+"/rooms/x51y57z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
