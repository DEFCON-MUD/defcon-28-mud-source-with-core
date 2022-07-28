inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 0 }));
  set_short( "Hallway - x29y12z0" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y12z0.c",
  "south" : DIR+"/rooms/x29y11z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
