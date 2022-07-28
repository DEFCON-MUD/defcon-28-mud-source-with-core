inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 16, 2 }));
  set_short( "Corridor - x7y16z2" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y16z2.c",
  "east" : DIR+"/rooms/x8y16z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
