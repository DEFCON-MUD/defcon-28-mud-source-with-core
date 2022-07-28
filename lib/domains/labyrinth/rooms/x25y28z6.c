inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 28, 6 }));
  set_short( "Hallway - x25y28z6" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y28z6.c",
  "north" : DIR+"/rooms/x25y29z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
