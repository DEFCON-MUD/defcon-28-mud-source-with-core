inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 0 }));
  set_short( "Passage - x58y62z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z0.c",
  "east" : DIR+"/rooms/x59y62z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
