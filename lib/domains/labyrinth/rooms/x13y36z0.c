inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 36, 0 }));
  set_short( "Corridor - x13y36z0" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y36z0.c",
  "east" : DIR+"/rooms/x14y36z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
