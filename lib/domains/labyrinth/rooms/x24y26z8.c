inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 26, 8 }));
  set_short( "Passage - x24y26z8" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y26z8.c",
  "east" : DIR+"/rooms/x25y26z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
