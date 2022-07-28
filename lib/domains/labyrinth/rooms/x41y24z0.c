inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 24, 0 }));
  set_short( "Corridor - x41y24z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y24z0.c",
  "east" : DIR+"/rooms/x42y24z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
