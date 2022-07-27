inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 64, 5 }));
  set_short( "Hallway - x41y64z5" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y64z5.c",
  "east" : DIR+"/rooms/x42y64z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
