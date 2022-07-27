inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 27, 1 }));
  set_short( "Corridor - x31y27z1" );
set_objects( DIR+"/monsters/planner.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y28z1.c",
  "south" : DIR+"/rooms/x31y26z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the random junk evilmog thought up in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
