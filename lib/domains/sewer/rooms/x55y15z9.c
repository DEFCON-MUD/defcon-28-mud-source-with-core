inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 15, 9 }));
  set_short( "Hallway - x55y15z9" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y16z9.c",
  "south" : DIR+"/rooms/x55y14z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
