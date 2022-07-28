inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 5 }));
  set_short( "Passage - x11y40z5" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y40z5.c",
  "east" : DIR+"/rooms/x12y40z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the radioactive waste in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
