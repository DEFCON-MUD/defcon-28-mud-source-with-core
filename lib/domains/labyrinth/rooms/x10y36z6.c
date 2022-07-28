inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 36, 6 }));
  set_short( "Corridor - x10y36z6" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y36z6.c",
  "east" : DIR+"/rooms/x11y36z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
