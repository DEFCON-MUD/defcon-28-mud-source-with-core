inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 2 }));
  set_short( "Corridor - x1y27z2" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z2.c",
  "south" : DIR+"/rooms/x1y26z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
