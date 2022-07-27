inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 51, 2 }));
  set_short( "Corridor - x11y51z2" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y52z2.c",
  "south" : DIR+"/rooms/x11y50z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
