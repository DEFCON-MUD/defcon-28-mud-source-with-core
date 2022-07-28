inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 6 }));
  set_short( "Hallway - x5y58z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y58z6.c",
  "south" : DIR+"/rooms/x5y57z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
