inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 19, 1 }));
  set_short( "Corridor - x55y19z1" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y20z1.c",
  "south" : DIR+"/rooms/x55y18z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
