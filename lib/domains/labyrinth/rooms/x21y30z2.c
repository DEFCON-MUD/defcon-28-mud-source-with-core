inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 30, 2 }));
  set_short( "Passage - x21y30z2" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y30z2.c",
  "north" : DIR+"/rooms/x21y31z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
