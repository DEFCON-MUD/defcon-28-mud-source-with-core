inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 44, 0 }));
  set_short( "Corridor - x24y44z0" );
set_objects( DIR+"/npc/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y44z0.c",
  "east" : DIR+"/rooms/x25y44z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
