inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 2 }));
  set_short( "Hallway - x23y46z2" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y46z2.c",
  "north" : DIR+"/rooms/x23y47z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
