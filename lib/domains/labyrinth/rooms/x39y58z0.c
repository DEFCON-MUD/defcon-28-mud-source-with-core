inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 0 }));
  set_short( "Passage - x39y58z0" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y58z0.c",
  "north" : DIR+"/rooms/x39y59z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
