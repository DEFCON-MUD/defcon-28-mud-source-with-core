inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 3 }));
  set_short( "Passage - x47y6z3" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y6z3.c",
  "north" : DIR+"/rooms/x47y7z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
