inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 0, 0 }));
  set_short( "Corridor - x60y0z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y0z0.c",
  "east" : DIR+"/rooms/x61y0z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
