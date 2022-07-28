inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 5 }));
  set_short( "Passage - x57y46z5" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y46z5.c",
  "south" : DIR+"/rooms/x57y45z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
