inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 2 }));
  set_short( "Passage - x59y43z2" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z2.c",
  "south" : DIR+"/rooms/x59y42z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
