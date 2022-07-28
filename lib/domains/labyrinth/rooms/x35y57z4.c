inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 57, 4 }));
  set_short( "Hallway - x35y57z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y58z4.c",
  "south" : DIR+"/rooms/x35y56z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
