inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 40, 4 }));
  set_short( "Corridor - x4y40z4" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y40z4.c",
  "east" : DIR+"/rooms/x5y40z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
