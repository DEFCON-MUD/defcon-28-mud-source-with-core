inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 1, 9 }));
  set_short( "Passage - x17y1z9" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y2z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north.%^RESET%^");
}
