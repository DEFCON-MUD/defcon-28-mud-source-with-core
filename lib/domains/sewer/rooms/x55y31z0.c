inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 0 }));
  set_short( "Hallway - x55y31z0" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z0.c",
  "south" : DIR+"/rooms/x55y30z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
