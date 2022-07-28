inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 31, 5 }));
  set_short( "Corridor - x43y31z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y32z5.c",
  "south" : DIR+"/rooms/x43y30z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
