inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 29, 9 }));
  set_short( "Hallway - x23y29z9" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y30z9.c",
  "south" : DIR+"/rooms/x23y28z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
