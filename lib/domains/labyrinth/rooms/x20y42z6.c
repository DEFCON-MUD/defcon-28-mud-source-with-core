inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 42, 6 }));
  set_short( "Hallway - x20y42z6" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y42z6.c",
  "east" : DIR+"/rooms/x21y42z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
