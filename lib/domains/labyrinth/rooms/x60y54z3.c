inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 54, 3 }));
  set_short( "Passage - x60y54z3" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y54z3.c",
  "east" : DIR+"/rooms/x61y54z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
