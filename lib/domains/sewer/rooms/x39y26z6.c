inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 26, 6 }));
  set_short( "Hallway - x39y26z6" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y26z6.c",
  "east" : DIR+"/rooms/x40y26z6.c",
  "south" : DIR+"/rooms/x39y25z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
