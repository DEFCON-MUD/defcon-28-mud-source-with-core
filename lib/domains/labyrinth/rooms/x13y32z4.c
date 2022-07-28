inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 32, 4 }));
  set_short( "Corridor - x13y32z4" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y32z4.c",
  "south" : DIR+"/rooms/x13y31z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
