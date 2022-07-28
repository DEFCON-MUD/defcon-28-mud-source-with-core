inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 8 }));
  set_short( "Hallway - x6y0z8" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z8.c",
  "east" : DIR+"/rooms/x7y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
