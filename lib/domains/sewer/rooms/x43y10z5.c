inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 5 }));
  set_short( "Hallway - x43y10z5" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y10z5.c",
  "north" : DIR+"/rooms/x43y11z5.c",
  "south" : DIR+"/rooms/x43y9z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
