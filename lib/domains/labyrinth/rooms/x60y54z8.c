inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 54, 8 }));
  set_short( "Corridor - x60y54z8" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y54z8.c",
  "east" : DIR+"/rooms/x61y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
