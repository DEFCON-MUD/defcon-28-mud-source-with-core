inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 18, 9 }));
  set_short( "Passage - x1y18z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y18z9.c",
  "north" : DIR+"/rooms/x1y19z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
