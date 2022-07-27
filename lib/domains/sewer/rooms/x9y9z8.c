inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 9, 8 }));
  set_short( "Hallway - x9y9z8" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y10z8.c",
  "south" : DIR+"/rooms/x9y8z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
