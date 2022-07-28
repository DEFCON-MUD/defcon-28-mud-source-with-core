inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 6, 4 }));
  set_short( "Corridor - x18y6z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y6z4.c",
  "east" : DIR+"/rooms/x19y6z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
