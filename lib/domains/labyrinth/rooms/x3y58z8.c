inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 58, 8 }));
  set_short( "Hallway - x3y58z8" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y58z8.c",
  "north" : DIR+"/rooms/x3y59z8.c",
  "south" : DIR+"/rooms/x3y57z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
