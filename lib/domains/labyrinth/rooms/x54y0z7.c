inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 0, 7 }));
  set_short( "Hallway - x54y0z7" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y0z7.c",
  "east" : DIR+"/rooms/x55y0z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
