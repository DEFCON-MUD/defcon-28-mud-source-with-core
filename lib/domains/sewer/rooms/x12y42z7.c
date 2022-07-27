inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 42, 7 }));
  set_short( "Hallway - x12y42z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y42z7.c",
  "east" : DIR+"/rooms/x13y42z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
