inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 6, 0 }));
  set_short( "Passage - x46y6z0" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y6z0.c",
  "east" : DIR+"/rooms/x47y6z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
