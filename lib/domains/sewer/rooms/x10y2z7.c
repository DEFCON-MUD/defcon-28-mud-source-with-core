inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 2, 7 }));
  set_short( "Hallway - x10y2z7" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y2z7.c",
  "east" : DIR+"/rooms/x11y2z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
