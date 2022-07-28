inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 5, 1 }));
  set_short( "Hallway - x51y5z1" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y6z1.c",
  "south" : DIR+"/rooms/x51y4z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
