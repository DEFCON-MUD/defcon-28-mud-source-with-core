inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 5 }));
  set_short( "Hallway - x1y61z5" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z5.c",
  "south" : DIR+"/rooms/x1y60z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
