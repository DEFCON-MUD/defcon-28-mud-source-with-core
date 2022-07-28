inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 19, 8 }));
  set_short( "Corridor - x1y19z8" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y20z8.c",
  "south" : DIR+"/rooms/x1y18z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
