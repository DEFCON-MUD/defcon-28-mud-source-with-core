inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 55, 3 }));
  set_short( "Hallway - x17y55z3" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y56z3.c",
  "south" : DIR+"/rooms/x17y54z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
