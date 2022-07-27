inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 9, 4 }));
  set_short( "Passage - x51y9z4" );
set_objects( DIR+"/monsters/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y10z4.c",
  "south" : DIR+"/rooms/x51y8z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
