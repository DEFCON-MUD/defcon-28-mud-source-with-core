inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 39, 9 }));
  set_short( "Corridor - x5y39z9" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y40z9.c",
  "south" : DIR+"/rooms/x5y38z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
