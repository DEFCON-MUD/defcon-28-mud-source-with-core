inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 36, 6 }));
  set_short( "Corridor - x3y36z6" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y36z6.c",
  "north" : DIR+"/rooms/x3y37z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
