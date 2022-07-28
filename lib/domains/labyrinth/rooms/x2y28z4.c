inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 28, 4 }));
  set_short( "Corridor - x2y28z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y28z4.c",
  "east" : DIR+"/rooms/x3y28z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
