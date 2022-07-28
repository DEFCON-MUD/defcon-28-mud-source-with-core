inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 0, 8 }));
  set_short( "Corridor - x14y0z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y0z8.c",
  "east" : DIR+"/rooms/x15y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
