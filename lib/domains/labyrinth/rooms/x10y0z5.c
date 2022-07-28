inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 5 }));
  set_short( "Corridor - x10y0z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z5.c",
  "east" : DIR+"/rooms/x11y0z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
