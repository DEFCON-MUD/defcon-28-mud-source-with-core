inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 6, 2 }));
  set_short( "Corridor - x38y6z2" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y6z2.c",
  "east" : DIR+"/rooms/x39y6z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
