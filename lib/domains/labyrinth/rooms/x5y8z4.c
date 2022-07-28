inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 8, 4 }));
  set_short( "Hallway - x5y8z4" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y8z4.c",
  "north" : DIR+"/rooms/x5y9z4.c",
  "south" : DIR+"/rooms/x5y7z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
