inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 33, 7 }));
  set_short( "Corridor - x1y33z7" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y34z7.c",
  "south" : DIR+"/rooms/x1y32z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
