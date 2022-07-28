inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 46, 0 }));
  set_short( "Hallway - x9y46z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y46z0.c",
  "south" : DIR+"/rooms/x9y45z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
