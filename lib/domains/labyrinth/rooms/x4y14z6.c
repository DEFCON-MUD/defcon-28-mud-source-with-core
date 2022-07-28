inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 14, 6 }));
  set_short( "Hallway - x4y14z6" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y14z6.c",
  "east" : DIR+"/rooms/x5y14z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
