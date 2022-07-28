inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 5 }));
  set_short( "Hallway - x55y30z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y30z5.c",
  "north" : DIR+"/rooms/x55y31z5.c",
  "south" : DIR+"/rooms/x55y29z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
