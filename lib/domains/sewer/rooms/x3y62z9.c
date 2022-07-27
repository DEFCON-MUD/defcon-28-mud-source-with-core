inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 9 }));
  set_short( "Hallway - x3y62z9" );
set_objects( DIR+"/monsters/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z9.c",
  "east" : DIR+"/rooms/x4y62z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
