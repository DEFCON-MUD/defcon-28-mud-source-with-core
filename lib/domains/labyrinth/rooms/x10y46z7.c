inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 46, 7 }));
  set_short( "Hallway - x10y46z7" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y46z7.c",
  "east" : DIR+"/rooms/x11y46z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
