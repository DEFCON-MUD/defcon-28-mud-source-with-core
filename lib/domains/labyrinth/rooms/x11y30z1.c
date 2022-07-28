inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 1 }));
  set_short( "Passage - x11y30z1" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y30z1.c",
  "south" : DIR+"/rooms/x11y29z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crappy sales material in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
