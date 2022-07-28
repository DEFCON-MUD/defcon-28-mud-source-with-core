inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 4 }));
  set_short( "Hallway - x55y4z4" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y4z4.c",
  "east" : DIR+"/rooms/x56y4z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
