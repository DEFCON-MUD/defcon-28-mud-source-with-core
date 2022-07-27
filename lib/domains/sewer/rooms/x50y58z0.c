inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 0 }));
  set_short( "Corridor - x50y58z0" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z0.c",
  "east" : DIR+"/rooms/x51y58z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
