inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 8 }));
  set_short( "Hallway - x19y46z8" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y47z8.c",
  "south" : DIR+"/rooms/x19y45z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
