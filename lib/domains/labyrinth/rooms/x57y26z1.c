inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 1 }));
  set_short( "Passage - x57y26z1" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y26z1.c",
  "north" : DIR+"/rooms/x57y27z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
