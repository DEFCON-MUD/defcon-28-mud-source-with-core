inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 14, 0 }));
  set_short( "Hallway - x36y14z0" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y14z0.c",
  "east" : DIR+"/rooms/x37y14z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
