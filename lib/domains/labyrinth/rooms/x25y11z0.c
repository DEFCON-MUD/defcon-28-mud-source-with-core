inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 11, 0 }));
  set_short( "Passage - x25y11z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y12z0.c",
  "south" : DIR+"/rooms/x25y10z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
