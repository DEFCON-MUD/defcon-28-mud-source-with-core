inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 2 }));
  set_short( "Corridor - x15y6z2" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y6z2.c",
  "south" : DIR+"/rooms/x15y5z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
