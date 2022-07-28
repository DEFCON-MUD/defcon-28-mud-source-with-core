inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 40, 2 }));
  set_short( "Corridor - x19y40z2" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y40z2.c",
  "east" : DIR+"/rooms/x20y40z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
