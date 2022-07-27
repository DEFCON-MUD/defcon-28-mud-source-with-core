inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 3, 7 }));
  set_short( "Corridor - x41y3z7" );
set_objects( DIR+"/monsters/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y4z7.c",
  "south" : DIR+"/rooms/x41y2z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
