inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 0 }));
  set_short( "Corridor - x55y30z0" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y30z0.c",
  "north" : DIR+"/rooms/x55y31z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
