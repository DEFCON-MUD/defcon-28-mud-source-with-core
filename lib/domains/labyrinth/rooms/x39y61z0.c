inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 61, 0 }));
  set_short( "Corridor - x39y61z0" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y62z0.c",
  "south" : DIR+"/rooms/x39y60z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
