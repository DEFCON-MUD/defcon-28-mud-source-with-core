inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 6, 3 }));
  set_short( "Corridor - x8y6z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y6z3.c",
  "east" : DIR+"/rooms/x9y6z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
