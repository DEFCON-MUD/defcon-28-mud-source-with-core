inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 64, 0 }));
  set_short( "Hallway - x59y64z0" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y64z0.c",
  "east" : DIR+"/rooms/x60y64z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
