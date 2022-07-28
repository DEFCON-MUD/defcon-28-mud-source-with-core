inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 8 }));
  set_short( "Corridor - x17y6z8" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y6z8.c",
  "east" : DIR+"/rooms/x18y6z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
