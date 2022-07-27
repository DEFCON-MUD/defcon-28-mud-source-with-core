inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 0 }));
  set_short( "Passage - x25y8z0" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y8z0.c",
  "north" : DIR+"/rooms/x25y9z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
