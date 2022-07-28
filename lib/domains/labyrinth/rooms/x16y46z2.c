inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 46, 2 }));
  set_short( "Passage - x16y46z2" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y46z2.c",
  "east" : DIR+"/rooms/x17y46z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
