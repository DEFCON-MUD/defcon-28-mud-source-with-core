inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 54, 7 }));
  set_short( "Hallway - x59y54z7" );
set_objects( DIR+"/monsters/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y54z7.c",
  "south" : DIR+"/rooms/x59y53z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
