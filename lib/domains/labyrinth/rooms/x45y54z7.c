inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 7 }));
  set_short( "Hallway - x45y54z7" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y54z7.c",
  "south" : DIR+"/rooms/x45y53z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
