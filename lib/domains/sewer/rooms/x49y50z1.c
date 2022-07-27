inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 50, 1 }));
  set_short( "Passage - x49y50z1" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y50z1.c",
  "east" : DIR+"/rooms/x50y50z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
