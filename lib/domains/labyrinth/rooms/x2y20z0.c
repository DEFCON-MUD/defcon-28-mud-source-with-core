inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 0 }));
  set_short( "Passage - x2y20z0" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z0.c",
  "east" : DIR+"/rooms/x3y20z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
