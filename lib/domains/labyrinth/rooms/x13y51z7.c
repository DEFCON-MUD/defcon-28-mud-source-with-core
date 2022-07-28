inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 51, 7 }));
  set_short( "Passage - x13y51z7" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y52z7.c",
  "south" : DIR+"/rooms/x13y50z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
