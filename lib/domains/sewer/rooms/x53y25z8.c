inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 8 }));
  set_short( "Passage - x53y25z8" );
set_objects( DIR+"/monsters/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z8.c",
  "south" : DIR+"/rooms/x53y24z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
