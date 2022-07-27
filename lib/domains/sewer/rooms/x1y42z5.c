inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 42, 5 }));
  set_short( "Corridor - x1y42z5" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y42z5.c",
  "north" : DIR+"/rooms/x1y43z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
