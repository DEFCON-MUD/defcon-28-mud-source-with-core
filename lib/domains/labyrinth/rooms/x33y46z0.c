inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 0 }));
  set_short( "Passage - x33y46z0" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y46z0.c",
  "east" : DIR+"/rooms/x34y46z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
