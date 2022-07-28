inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 5 }));
  set_short( "Corridor - x61y9z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z5.c",
  "south" : DIR+"/rooms/x61y8z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
