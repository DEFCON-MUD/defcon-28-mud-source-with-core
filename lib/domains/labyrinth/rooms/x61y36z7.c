inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 7 }));
  set_short( "Passage - x61y36z7" );
set_objects( DIR+"/npc/agent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y36z7.c",
  "north" : DIR+"/rooms/x61y37z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
