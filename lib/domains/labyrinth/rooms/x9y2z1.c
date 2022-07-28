inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 1 }));
  set_short( "Corridor - x9y2z1" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y2z1.c",
  "north" : DIR+"/rooms/x9y3z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
