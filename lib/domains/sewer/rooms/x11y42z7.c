inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 42, 7 }));
  set_short( "Corridor - x11y42z7" );
set_objects( DIR+"/monsters/salesdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y42z7.c",
  "south" : DIR+"/rooms/x11y41z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
