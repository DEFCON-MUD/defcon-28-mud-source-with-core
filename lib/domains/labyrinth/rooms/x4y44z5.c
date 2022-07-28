inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 44, 5 }));
  set_short( "Corridor - x4y44z5" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y44z5.c",
  "east" : DIR+"/rooms/x5y44z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
