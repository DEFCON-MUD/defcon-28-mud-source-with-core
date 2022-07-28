inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 7 }));
  set_short( "Passage - x59y28z7" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y28z7.c",
  "east" : DIR+"/rooms/x60y28z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
