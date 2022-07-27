inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 3, 0 }));
  set_short( "Passage - x1y3z0" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y4z0.c",
  "south" : DIR+"/rooms/x1y2z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
