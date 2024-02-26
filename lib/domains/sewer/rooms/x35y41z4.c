inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 41, 4 }));
  set_short( "Hallway - x35y41z4" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y42z4.c",
  "south" : DIR+"/rooms/x35y40z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
