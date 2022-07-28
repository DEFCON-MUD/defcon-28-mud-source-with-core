inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 8 }));
  set_short( "Hallway - x59y58z8" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y58z8.c",
  "north" : DIR+"/rooms/x59y59z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
