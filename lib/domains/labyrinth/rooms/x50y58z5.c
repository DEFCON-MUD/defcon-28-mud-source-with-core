inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 58, 5 }));
  set_short( "Hallway - x50y58z5" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y58z5.c",
  "east" : DIR+"/rooms/x51y58z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
