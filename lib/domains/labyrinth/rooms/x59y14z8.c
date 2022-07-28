inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 8 }));
  set_short( "Passage - x59y14z8" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y14z8.c",
  "north" : DIR+"/rooms/x59y15z8.c",
  "south" : DIR+"/rooms/x59y13z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
