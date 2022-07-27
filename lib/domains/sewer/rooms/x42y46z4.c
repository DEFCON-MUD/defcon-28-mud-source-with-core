inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 46, 4 }));
  set_short( "Hallway - x42y46z4" );
set_objects( DIR+"/monsters/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y46z4.c",
  "east" : DIR+"/rooms/x43y46z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
