inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 26, 3 }));
  set_short( "Corridor - x1y26z3" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y27z3.c",
  "south" : DIR+"/rooms/x1y25z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
