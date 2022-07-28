inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 32, 5 }));
  set_short( "Passage - x30y32z5" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y32z5.c",
  "east" : DIR+"/rooms/x31y32z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
