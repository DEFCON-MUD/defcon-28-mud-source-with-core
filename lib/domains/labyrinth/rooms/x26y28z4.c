inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 28, 4 }));
  set_short( "Corridor - x26y28z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y28z4.c",
  "east" : DIR+"/rooms/x27y28z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
