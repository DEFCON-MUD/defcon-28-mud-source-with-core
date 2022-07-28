inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 13, 7 }));
  set_short( "Corridor - x35y13z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y14z7.c",
  "south" : DIR+"/rooms/x35y12z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
