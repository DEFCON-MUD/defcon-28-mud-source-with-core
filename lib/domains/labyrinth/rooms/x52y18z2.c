inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 18, 2 }));
  set_short( "Hallway - x52y18z2" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y18z2.c",
  "east" : DIR+"/rooms/x53y18z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
