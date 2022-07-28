inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 38, 3 }));
  set_short( "Passage - x3y38z3" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y38z3.c",
  "north" : DIR+"/rooms/x3y39z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
