inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 62, 4 }));
  set_short( "Hallway - x55y62z4" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y62z4.c",
  "south" : DIR+"/rooms/x55y61z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
