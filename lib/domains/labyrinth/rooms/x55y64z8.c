inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 8 }));
  set_short( "Hallway - x55y64z8" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z8.c",
  "east" : DIR+"/rooms/x56y64z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
