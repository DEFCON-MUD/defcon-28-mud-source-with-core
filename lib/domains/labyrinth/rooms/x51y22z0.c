inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 22, 0 }));
  set_short( "Passage - x51y22z0" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y22z0.c",
  "east" : DIR+"/rooms/x52y22z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
