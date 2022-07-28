inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 4 }));
  set_short( "Hallway - x61y52z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z4.c",
  "north" : DIR+"/rooms/x61y53z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
