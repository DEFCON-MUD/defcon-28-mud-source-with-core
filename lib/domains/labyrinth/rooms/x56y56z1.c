inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 56, 1 }));
  set_short( "Hallway - x56y56z1" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y56z1.c",
  "east" : DIR+"/rooms/x57y56z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
