inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 12, 0 }));
  set_short( "Hallway - x10y12z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y12z0.c",
  "east" : DIR+"/rooms/x11y12z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
