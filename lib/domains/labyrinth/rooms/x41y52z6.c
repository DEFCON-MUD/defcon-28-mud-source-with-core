inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 6 }));
  set_short( "Passage - x41y52z6" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y52z6.c",
  "north" : DIR+"/rooms/x41y53z6.c",
  "south" : DIR+"/rooms/x41y51z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
