inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 0 }));
  set_short( "Hallway - x11y52z0" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y53z0.c",
  "south" : DIR+"/rooms/x11y51z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
