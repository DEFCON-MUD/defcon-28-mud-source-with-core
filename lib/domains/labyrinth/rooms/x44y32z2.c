inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 32, 2 }));
  set_short( "Hallway - x44y32z2" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y32z2.c",
  "east" : DIR+"/rooms/x45y32z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
