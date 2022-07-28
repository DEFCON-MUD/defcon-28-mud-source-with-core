inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 13, 6 }));
  set_short( "Hallway - x45y13z6" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y14z6.c",
  "south" : DIR+"/rooms/x45y12z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
