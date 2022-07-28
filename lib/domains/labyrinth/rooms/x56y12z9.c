inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 12, 9 }));
  set_short( "Passage - x56y12z9" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y12z9.c",
  "east" : DIR+"/rooms/x57y12z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
