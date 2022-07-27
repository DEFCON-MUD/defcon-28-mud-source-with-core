inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 42, 9 }));
  set_short( "Corridor - x34y42z9" );
set_objects( DIR+"/monsters/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y42z9.c",
  "east" : DIR+"/rooms/x35y42z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
