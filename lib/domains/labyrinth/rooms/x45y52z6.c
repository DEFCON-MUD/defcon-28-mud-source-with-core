inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 6 }));
  set_short( "Passage - x45y52z6" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z6.c",
  "south" : DIR+"/rooms/x45y51z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
