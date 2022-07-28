inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 59, 6 }));
  set_short( "Hallway - x59y59z6" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y60z6.c",
  "south" : DIR+"/rooms/x59y58z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
