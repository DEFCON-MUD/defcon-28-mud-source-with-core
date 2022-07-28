inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 34, 7 }));
  set_short( "Corridor - x16y34z7" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y34z7.c",
  "east" : DIR+"/rooms/x17y34z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
