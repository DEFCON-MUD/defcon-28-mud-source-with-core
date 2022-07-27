inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 3 }));
  set_short( "Hallway - x41y62z3" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y62z3.c",
  "south" : DIR+"/rooms/x41y61z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
