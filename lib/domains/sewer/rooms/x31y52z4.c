inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 4 }));
  set_short( "Passage - x31y52z4" );
set_objects( DIR+"/monsters/agent.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y52z4.c",
  "south" : DIR+"/rooms/x31y51z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
