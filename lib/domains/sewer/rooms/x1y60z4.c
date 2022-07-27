inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 60, 4 }));
  set_short( "Passage - x1y60z4" );
set_objects( DIR+"/monsters/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y60z4.c",
  "north" : DIR+"/rooms/x1y61z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
