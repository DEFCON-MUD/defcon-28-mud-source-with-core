inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 31, 4 }));
  set_short( "Hallway - x3y31z4" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y32z4.c",
  "south" : DIR+"/rooms/x3y30z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
