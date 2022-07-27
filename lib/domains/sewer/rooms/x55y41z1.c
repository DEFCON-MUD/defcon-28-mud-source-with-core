inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 41, 1 }));
  set_short( "Passage - x55y41z1" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y42z1.c",
  "south" : DIR+"/rooms/x55y40z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
