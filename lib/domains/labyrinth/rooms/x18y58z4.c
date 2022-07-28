inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 58, 4 }));
  set_short( "Hallway - x18y58z4" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y58z4.c",
  "east" : DIR+"/rooms/x19y58z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
