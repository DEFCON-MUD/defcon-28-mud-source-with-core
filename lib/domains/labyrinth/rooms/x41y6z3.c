inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 3 }));
  set_short( "Corridor - x41y6z3" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y6z3.c",
  "north" : DIR+"/rooms/x41y7z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
