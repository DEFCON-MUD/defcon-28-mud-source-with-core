inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 9 }));
  set_short( "Hallway - x39y8z9" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z9.c",
  "south" : DIR+"/rooms/x39y7z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
