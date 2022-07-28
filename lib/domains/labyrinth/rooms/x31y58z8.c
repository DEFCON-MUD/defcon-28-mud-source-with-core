inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 58, 8 }));
  set_short( "Hallway - x31y58z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y58z8.c",
  "north" : DIR+"/rooms/x31y59z8.c",
  "south" : DIR+"/rooms/x31y57z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
