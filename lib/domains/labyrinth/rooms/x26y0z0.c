inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 0, 0 }));
  set_short( "Passage - x26y0z0" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y0z0.c",
  "east" : DIR+"/rooms/x27y0z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
