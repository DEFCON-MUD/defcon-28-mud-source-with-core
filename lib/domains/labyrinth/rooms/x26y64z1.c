inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 64, 1 }));
  set_short( "Passage - x26y64z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y64z1.c",
  "east" : DIR+"/rooms/x27y64z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
