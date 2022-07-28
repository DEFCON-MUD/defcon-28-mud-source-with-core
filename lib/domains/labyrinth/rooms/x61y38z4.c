inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 38, 4 }));
  set_short( "Hallway - x61y38z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y38z4.c",
  "south" : DIR+"/rooms/x61y37z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
