inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 3 }));
  set_short( "Passage - x29y54z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y54z3.c",
  "east" : DIR+"/rooms/x30y54z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
