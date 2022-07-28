inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 18, 7 }));
  set_short( "Corridor - x9y18z7" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y19z7.c",
  "south" : DIR+"/rooms/x9y17z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
