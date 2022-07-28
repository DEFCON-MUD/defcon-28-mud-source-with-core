inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 40, 4 }));
  set_short( "Passage - x55y40z4" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y40z4.c",
  "east" : DIR+"/rooms/x56y40z4.c",
  "south" : DIR+"/rooms/x55y39z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
