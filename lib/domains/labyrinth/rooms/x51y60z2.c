inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 2 }));
  set_short( "Corridor - x51y60z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y60z2.c",
  "east" : DIR+"/rooms/x52y60z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
