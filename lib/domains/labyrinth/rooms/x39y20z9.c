inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 20, 9 }));
  set_short( "Passage - x39y20z9" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y20z9.c",
  "north" : DIR+"/rooms/x39y21z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
