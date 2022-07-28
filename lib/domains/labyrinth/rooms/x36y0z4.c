inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 0, 4 }));
  set_short( "Corridor - x36y0z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y0z4.c",
  "east" : DIR+"/rooms/x37y0z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
