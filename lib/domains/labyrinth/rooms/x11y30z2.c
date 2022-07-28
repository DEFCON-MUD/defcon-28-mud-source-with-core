inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 30, 2 }));
  set_short( "Passage - x11y30z2" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y30z2.c",
  "north" : DIR+"/rooms/x11y31z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
