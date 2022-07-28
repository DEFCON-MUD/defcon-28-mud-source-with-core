inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 4 }));
  set_short( "Corridor - x1y14z4" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z4.c",
  "north" : DIR+"/rooms/x1y15z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
