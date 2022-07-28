inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 4, 7 }));
  set_short( "Hallway - x41y4z7" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y5z7.c",
  "south" : DIR+"/rooms/x41y3z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
