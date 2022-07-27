inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 5 }));
  set_short( "Passage - x1y64z5" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y64z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
