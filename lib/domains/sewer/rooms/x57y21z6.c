inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 21, 6 }));
  set_short( "Hallway - x57y21z6" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y22z6.c",
  "south" : DIR+"/rooms/x57y20z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
