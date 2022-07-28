inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 6 }));
  set_short( "Passage - x27y46z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z6.c",
  "north" : DIR+"/rooms/x27y47z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
