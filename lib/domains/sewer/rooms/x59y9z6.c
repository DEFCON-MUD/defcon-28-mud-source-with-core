inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 9, 6 }));
  set_short( "Passage - x59y9z6" );
set_objects( DIR+"/monsters/r1alan.bak.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y10z6.c",
  "south" : DIR+"/rooms/x59y8z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
