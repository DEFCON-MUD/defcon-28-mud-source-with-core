inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 46, 0 }));
  set_short( "Hallway - x10y46z0" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y46z0.c",
  "east" : DIR+"/rooms/x11y46z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
