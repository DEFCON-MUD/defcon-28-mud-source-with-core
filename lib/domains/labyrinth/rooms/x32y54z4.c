inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 54, 4 }));
  set_short( "Corridor - x32y54z4" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y54z4.c",
  "east" : DIR+"/rooms/x33y54z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
