inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 3 }));
  set_short( "Hallway - x31y36z3" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y36z3.c",
  "south" : DIR+"/rooms/x31y35z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
