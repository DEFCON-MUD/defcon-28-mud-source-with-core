inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 28, 1 }));
  set_short( "Corridor - x60y28z1" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y28z1.c",
  "east" : DIR+"/rooms/x61y28z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
