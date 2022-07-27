inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 9 }));
  set_short( "Corridor - x1y4z9" );
set_objects( DIR+"/monsters/tinyweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y4z9.c",
  "north" : DIR+"/rooms/x1y5z9.c",
  "south" : DIR+"/rooms/x1y3z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
