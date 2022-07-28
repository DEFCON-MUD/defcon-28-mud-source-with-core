inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 2, 2 }));
  set_short( "Passage - x43y2z2" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y2z2.c",
  "north" : DIR+"/rooms/x43y3z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
