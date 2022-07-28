inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 13, 8 }));
  set_short( "Corridor - x37y13z8" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y14z8.c",
  "south" : DIR+"/rooms/x37y12z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
