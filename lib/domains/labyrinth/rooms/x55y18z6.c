inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 18, 6 }));
  set_short( "Hallway - x55y18z6" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y18z6.c",
  "north" : DIR+"/rooms/x55y19z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
