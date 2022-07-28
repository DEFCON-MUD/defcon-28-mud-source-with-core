inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 62, 1 }));
  set_short( "Passage - x26y62z1" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y62z1.c",
  "east" : DIR+"/rooms/x27y62z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
