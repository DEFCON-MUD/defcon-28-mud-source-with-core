inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 9 }));
  set_short( "Hallway - x47y36z9" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y36z9.c",
  "east" : DIR+"/rooms/x48y36z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
