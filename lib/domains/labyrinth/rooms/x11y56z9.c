inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 56, 9 }));
  set_short( "Passage - x11y56z9" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y56z9.c",
  "north" : DIR+"/rooms/x11y57z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
