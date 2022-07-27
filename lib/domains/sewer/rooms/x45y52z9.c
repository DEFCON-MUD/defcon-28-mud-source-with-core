inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 52, 9 }));
  set_short( "Passage - x45y52z9" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y52z9.c",
  "south" : DIR+"/rooms/x45y51z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
