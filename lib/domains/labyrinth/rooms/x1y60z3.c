inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 3 }));
  set_short( "Passage - x1y60z3" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z3.c",
  "north" : DIR+"/rooms/x1y61z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
