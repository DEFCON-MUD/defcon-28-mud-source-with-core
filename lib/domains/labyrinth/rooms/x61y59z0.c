inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 0 }));
  set_short( "Corridor - x61y59z0" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z0.c",
  "south" : DIR+"/rooms/x61y58z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
