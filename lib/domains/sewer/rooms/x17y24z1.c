inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 1 }));
  set_short( "Hallway - x17y24z1" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y24z1.c",
  "east" : DIR+"/rooms/x18y24z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
