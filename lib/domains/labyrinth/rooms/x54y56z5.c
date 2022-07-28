inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 56, 5 }));
  set_short( "Passage - x54y56z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y56z5.c",
  "east" : DIR+"/rooms/x55y56z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
