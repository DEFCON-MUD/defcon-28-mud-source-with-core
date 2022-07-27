inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 11, 4 }));
  set_short( "Hallway - x61y11z4" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y12z4.c",
  "south" : DIR+"/rooms/x61y10z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
