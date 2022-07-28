inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 44, 5 }));
  set_short( "Corridor - x25y44z5" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y44z5.c",
  "south" : DIR+"/rooms/x25y43z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
