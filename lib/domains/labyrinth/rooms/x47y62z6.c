inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 6 }));
  set_short( "Corridor - x47y62z6" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z6.c",
  "east" : DIR+"/rooms/x48y62z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
