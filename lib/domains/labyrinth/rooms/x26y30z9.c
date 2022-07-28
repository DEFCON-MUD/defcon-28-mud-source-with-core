inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 30, 9 }));
  set_short( "Corridor - x26y30z9" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y30z9.c",
  "east" : DIR+"/rooms/x27y30z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
