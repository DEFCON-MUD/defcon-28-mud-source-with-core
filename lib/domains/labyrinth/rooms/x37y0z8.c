inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 8 }));
  set_short( "Corridor - x37y0z8" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z8.c",
  "east" : DIR+"/rooms/x38y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
