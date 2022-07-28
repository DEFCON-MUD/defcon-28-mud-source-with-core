inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 4, 5 }));
  set_short( "Corridor - x43y4z5" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "south" : DIR+"/rooms/x43y3z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
