inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 4, 5 }));
  set_short( "Corridor - x58y4z5" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y4z5.c",
  "east" : DIR+"/rooms/x59y4z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
