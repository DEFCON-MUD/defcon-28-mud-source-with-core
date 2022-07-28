inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 5, 4 }));
  set_short( "Passage - x49y5z4" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y6z4.c",
  "south" : DIR+"/rooms/x49y4z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
