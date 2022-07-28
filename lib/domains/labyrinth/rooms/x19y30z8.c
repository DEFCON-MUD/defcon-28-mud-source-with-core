inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 30, 8 }));
  set_short( "Corridor - x19y30z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y30z8.c",
  "north" : DIR+"/rooms/x19y31z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
