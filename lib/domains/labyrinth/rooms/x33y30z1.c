inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 30, 1 }));
  set_short( "Corridor - x33y30z1" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y30z1.c",
  "north" : DIR+"/rooms/x33y31z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
