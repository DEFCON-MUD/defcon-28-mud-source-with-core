inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 29, 1 }));
  set_short( "Corridor - x43y29z1" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y30z1.c",
  "south" : DIR+"/rooms/x43y28z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
