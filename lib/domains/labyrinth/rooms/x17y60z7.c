inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 7 }));
  set_short( "Passage - x17y60z7" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y60z7.c",
  "south" : DIR+"/rooms/x17y59z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
