inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 27, 4 }));
  set_short( "Passage - x29y27z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y28z4.c",
  "south" : DIR+"/rooms/x29y26z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
