inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 6 }));
  set_short( "Hallway - x5y4z6" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y4z6.c",
  "east" : DIR+"/rooms/x6y4z6.c",
  "north" : DIR+"/rooms/x5y5z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
