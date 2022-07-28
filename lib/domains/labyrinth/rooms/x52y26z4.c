inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 26, 4 }));
  set_short( "Hallway - x52y26z4" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y26z4.c",
  "east" : DIR+"/rooms/x53y26z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
