inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 54, 1 }));
  set_short( "Hallway - x38y54z1" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y54z1.c",
  "east" : DIR+"/rooms/x39y54z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
