inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 31, 5 }));
  set_short( "Passage - x61y31z5" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y32z5.c",
  "south" : DIR+"/rooms/x61y30z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
