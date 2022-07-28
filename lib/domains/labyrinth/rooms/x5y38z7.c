inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 7 }));
  set_short( "Hallway - x5y38z7" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y38z7.c",
  "north" : DIR+"/rooms/x5y39z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
