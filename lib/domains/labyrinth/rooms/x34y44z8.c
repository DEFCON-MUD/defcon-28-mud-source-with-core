inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 44, 8 }));
  set_short( "Passage - x34y44z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y44z8.c",
  "east" : DIR+"/rooms/x35y44z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
