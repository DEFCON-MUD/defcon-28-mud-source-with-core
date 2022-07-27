inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 12, 1 }));
  set_short( "Hallway - x5y12z1" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y12z1.c",
  "south" : DIR+"/rooms/x5y11z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
