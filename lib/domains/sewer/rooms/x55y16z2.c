inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 16, 2 }));
  set_short( "Corridor - x55y16z2" );
set_objects( DIR+"/monsters/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y16z2.c",
  "east" : DIR+"/rooms/x56y16z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
