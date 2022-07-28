inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 0, 7 }));
  set_short( "Hallway - x27y0z7" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y0z7.c",
  "east" : DIR+"/rooms/x28y0z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
