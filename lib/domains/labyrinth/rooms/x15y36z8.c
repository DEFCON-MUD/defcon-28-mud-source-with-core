inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 36, 8 }));
  set_short( "Hallway - x15y36z8" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y36z8.c",
  "east" : DIR+"/rooms/x16y36z8.c",
  "south" : DIR+"/rooms/x15y35z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
