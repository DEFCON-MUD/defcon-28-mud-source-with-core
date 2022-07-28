inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 30, 0 }));
  set_short( "Passage - x15y30z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y31z0.c",
  "south" : DIR+"/rooms/x15y29z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
