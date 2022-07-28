inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 30, 8 }));
  set_short( "Passage - x21y30z8" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y30z8.c",
  "north" : DIR+"/rooms/x21y31z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
