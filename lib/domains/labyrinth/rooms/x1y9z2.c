inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 9, 2 }));
  set_short( "Corridor - x1y9z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y10z2.c",
  "south" : DIR+"/rooms/x1y8z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
