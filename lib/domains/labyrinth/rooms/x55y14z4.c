inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 14, 4 }));
  set_short( "Passage - x55y14z4" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y14z4.c",
  "east" : DIR+"/rooms/x56y14z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
