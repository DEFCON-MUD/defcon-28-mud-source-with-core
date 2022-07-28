inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 10, 8 }));
  set_short( "Passage - x29y10z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y10z8.c",
  "north" : DIR+"/rooms/x29y11z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
