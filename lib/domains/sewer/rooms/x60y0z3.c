inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 0, 3 }));
  set_short( "Corridor - x60y0z3" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y0z3.c",
  "east" : DIR+"/rooms/x61y0z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
