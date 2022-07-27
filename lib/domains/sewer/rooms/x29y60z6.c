inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 60, 6 }));
  set_short( "Corridor - x29y60z6" );
set_objects( DIR+"/monsters/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y60z6.c",
  "north" : DIR+"/rooms/x29y61z6.c",
  "south" : DIR+"/rooms/x29y59z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
