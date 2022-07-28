inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 17, 2 }));
  set_short( "Hallway - x13y17z2" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y18z2.c",
  "south" : DIR+"/rooms/x13y16z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
