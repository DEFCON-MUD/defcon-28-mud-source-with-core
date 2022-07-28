inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 2, 9 }));
  set_short( "Corridor - x27y2z9" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y2z9.c",
  "north" : DIR+"/rooms/x27y3z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
