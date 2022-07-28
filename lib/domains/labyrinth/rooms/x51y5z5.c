inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 5 }));
  set_short( "Hallway - x51y5z5" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z5.c",
  "south" : DIR+"/rooms/x51y4z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
