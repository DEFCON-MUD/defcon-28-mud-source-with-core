inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 3 }));
  set_short( "Corridor - x5y54z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y54z3.c",
  "north" : DIR+"/rooms/x5y55z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
