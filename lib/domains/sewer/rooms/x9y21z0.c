inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 21, 0 }));
  set_short( "Passage - x9y21z0" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y22z0.c",
  "south" : DIR+"/rooms/x9y20z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
