inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 2 }));
  set_short( "Passage - x59y40z2" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y40z2.c",
  "south" : DIR+"/rooms/x59y39z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
