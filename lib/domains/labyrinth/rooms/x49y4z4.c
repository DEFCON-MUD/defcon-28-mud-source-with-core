inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 4, 4 }));
  set_short( "Passage - x49y4z4" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y4z4.c",
  "north" : DIR+"/rooms/x49y5z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
