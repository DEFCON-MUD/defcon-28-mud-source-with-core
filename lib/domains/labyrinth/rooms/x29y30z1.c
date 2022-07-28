inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 30, 1 }));
  set_short( "Hallway - x29y30z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y30z1.c",
  "south" : DIR+"/rooms/x29y29z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
