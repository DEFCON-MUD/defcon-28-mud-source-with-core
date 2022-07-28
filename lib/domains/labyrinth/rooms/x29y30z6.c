inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 6 }));
  set_short( "Hallway - x29y30z6" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y30z6.c",
  "north" : DIR+"/rooms/x29y31z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
