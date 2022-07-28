inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 60, 8 }));
  set_short( "Passage - x51y60z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y60z8.c",
  "north" : DIR+"/rooms/x51y61z8.c",
  "south" : DIR+"/rooms/x51y59z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
