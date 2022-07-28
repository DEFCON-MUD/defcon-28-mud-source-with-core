inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 25, 4 }));
  set_short( "Passage - x59y25z4" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y26z4.c",
  "south" : DIR+"/rooms/x59y24z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
