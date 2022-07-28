inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 0, 8 }));
  set_short( "Corridor - x44y0z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y0z8.c",
  "east" : DIR+"/rooms/x45y0z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
