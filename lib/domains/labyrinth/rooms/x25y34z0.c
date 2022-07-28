inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 0 }));
  set_short( "Corridor - x25y34z0" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y35z0.c",
  "south" : DIR+"/rooms/x25y33z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
