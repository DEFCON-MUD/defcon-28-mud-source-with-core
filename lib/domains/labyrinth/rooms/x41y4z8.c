inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 8 }));
  set_short( "Corridor - x41y4z8" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y4z8.c",
  "south" : DIR+"/rooms/x41y3z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
