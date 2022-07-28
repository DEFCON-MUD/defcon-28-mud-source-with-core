inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 5 }));
  set_short( "Hallway - x1y60z5" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z5.c",
  "north" : DIR+"/rooms/x1y61z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
