inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 43, 0 }));
  set_short( "Passage - x15y43z0" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y44z0.c",
  "south" : DIR+"/rooms/x15y42z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
