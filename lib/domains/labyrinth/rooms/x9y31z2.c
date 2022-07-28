inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 31, 2 }));
  set_short( "Passage - x9y31z2" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y32z2.c",
  "south" : DIR+"/rooms/x9y30z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
