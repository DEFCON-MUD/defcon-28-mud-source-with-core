inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 40, 9 }));
  set_short( "Hallway - x28y40z9" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y40z9.c",
  "east" : DIR+"/rooms/x29y40z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
