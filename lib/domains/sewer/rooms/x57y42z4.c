inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 42, 4 }));
  set_short( "Corridor - x57y42z4" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y42z4.c",
  "east" : DIR+"/rooms/x58y42z4.c",
  "north" : DIR+"/rooms/x57y43z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
