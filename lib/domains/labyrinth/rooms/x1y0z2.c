inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 0, 2 }));
  set_short( "Corridor - x1y0z2" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y0z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
