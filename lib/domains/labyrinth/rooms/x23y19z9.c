inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 19, 9 }));
  set_short( "Corridor - x23y19z9" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y20z9.c",
  "south" : DIR+"/rooms/x23y18z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
