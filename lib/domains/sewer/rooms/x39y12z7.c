inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 7 }));
  set_short( "Hallway - x39y12z7" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y12z7.c",
  "east" : DIR+"/rooms/x40y12z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
