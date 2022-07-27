inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 50, 8 }));
  set_short( "Passage - x29y50z8" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y50z8.c",
  "north" : DIR+"/rooms/x29y51z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
