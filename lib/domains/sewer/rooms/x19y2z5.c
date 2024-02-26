inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 5 }));
  set_short( "Corridor - x19y2z5" );
set_objects( DIR+"/monsters/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z5.c",
  "east" : DIR+"/rooms/x20y2z5.c",
  "north" : DIR+"/rooms/x19y3z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
