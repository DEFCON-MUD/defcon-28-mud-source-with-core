inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 37, 4 }));
  set_short( "Hallway - x53y37z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y38z4.c",
  "south" : DIR+"/rooms/x53y36z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
