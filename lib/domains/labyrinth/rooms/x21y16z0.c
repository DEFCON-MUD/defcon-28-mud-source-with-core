inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 0 }));
  set_short( "Passage - x21y16z0" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y17z0.c",
  "south" : DIR+"/rooms/x21y15z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
