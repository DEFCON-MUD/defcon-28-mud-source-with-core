inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 1 }));
  set_short( "Passage - x49y60z1" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z1.c",
  "south" : DIR+"/rooms/x49y59z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
