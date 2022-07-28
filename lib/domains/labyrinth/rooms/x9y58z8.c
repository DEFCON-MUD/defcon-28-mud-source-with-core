inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 58, 8 }));
  set_short( "Passage - x9y58z8" );
set_objects( DIR+"/npc/coder.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y58z8.c",
  "north" : DIR+"/rooms/x9y59z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
