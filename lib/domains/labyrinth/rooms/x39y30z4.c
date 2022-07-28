inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 30, 4 }));
  set_short( "Corridor - x39y30z4" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y30z4.c",
  "east" : DIR+"/rooms/x40y30z4.c",
  "north" : DIR+"/rooms/x39y31z4.c",
  "south" : DIR+"/rooms/x39y29z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
