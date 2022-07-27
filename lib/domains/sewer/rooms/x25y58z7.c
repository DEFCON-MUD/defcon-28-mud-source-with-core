inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 7 }));
  set_short( "Hallway - x25y58z7" );
set_objects( DIR+"/monsters/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y58z7.c",
  "north" : DIR+"/rooms/x25y59z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
