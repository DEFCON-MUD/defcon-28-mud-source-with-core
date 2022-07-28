inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 45, 1 }));
  set_short( "Passage - x43y45z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y46z1.c",
  "south" : DIR+"/rooms/x43y44z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
