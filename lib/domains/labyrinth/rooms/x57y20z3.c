inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 20, 3 }));
  set_short( "Hallway - x57y20z3" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y20z3.c",
  "north" : DIR+"/rooms/x57y21z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
