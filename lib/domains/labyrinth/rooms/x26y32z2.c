inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 32, 2 }));
  set_short( "Hallway - x26y32z2" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y32z2.c",
  "east" : DIR+"/rooms/x27y32z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
