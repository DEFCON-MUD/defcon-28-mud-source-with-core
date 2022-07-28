inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 20, 7 }));
  set_short( "Passage - x2y20z7" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y20z7.c",
  "east" : DIR+"/rooms/x3y20z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
