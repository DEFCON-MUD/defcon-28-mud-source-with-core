inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 6 }));
  set_short( "Corridor - x14y64z6" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z6.c",
  "east" : DIR+"/rooms/x15y64z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
