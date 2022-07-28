inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 18, 6 }));
  set_short( "Passage - x33y18z6" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y18z6.c",
  "south" : DIR+"/rooms/x33y17z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
