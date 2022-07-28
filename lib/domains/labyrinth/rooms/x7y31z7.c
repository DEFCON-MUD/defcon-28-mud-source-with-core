inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 31, 7 }));
  set_short( "Corridor - x7y31z7" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y32z7.c",
  "south" : DIR+"/rooms/x7y30z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
