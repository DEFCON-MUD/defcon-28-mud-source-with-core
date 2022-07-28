inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 54, 8 }));
  set_short( "Corridor - x36y54z8" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y54z8.c",
  "east" : DIR+"/rooms/x37y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
