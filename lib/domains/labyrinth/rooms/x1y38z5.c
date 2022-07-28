inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 38, 5 }));
  set_short( "Hallway - x1y38z5" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y39z5.c",
  "south" : DIR+"/rooms/x1y37z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
