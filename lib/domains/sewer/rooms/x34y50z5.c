inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 5 }));
  set_short( "Corridor - x34y50z5" );
set_objects( DIR+"/monsters/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z5.c",
  "east" : DIR+"/rooms/x35y50z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
