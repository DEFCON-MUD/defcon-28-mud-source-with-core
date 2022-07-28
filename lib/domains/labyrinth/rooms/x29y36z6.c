inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 6 }));
  set_short( "Passage - x29y36z6" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y36z6.c",
  "south" : DIR+"/rooms/x29y35z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
