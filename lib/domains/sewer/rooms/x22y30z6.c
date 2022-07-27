inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 30, 6 }));
  set_short( "Hallway - x22y30z6" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y30z6.c",
  "east" : DIR+"/rooms/x23y30z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
